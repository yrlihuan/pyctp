#-*- coding=utf-8 -*-
"""
A wrapper for CTP's Api library
author: Lvsoft@gmail.com
date: 2010-07-20

This file is part of python-ctp library

python-ctp is free software; you can redistribute it and/or modify it
under the terms of the GUL Lesser General Public License as published
by the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

python-ctp is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY of FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along the python-ctp; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA
"""

"解析.h文件，分析枚举类型和结构体，生成描述数据供generate_struct使用，产生封装代码"

import re

class Parse:
    def __init__(self, fn_datatype, fn_datastruct, locale='utf-8'):
        #print locale,'initializing struct parse'
        self.locale = locale
        f=file(fn_datatype)
        self.file_datatype = f.readlines()
        f.close()

        f=file(fn_datastruct)
        self.file_datastruct = f.readlines()
        f.close()

        self.parse_datatype()
        self.parse_struct()

    def parse_datatype(self):
        self.enum={}
        # 解析类型定义和枚举定义
        fd= self.file_datatype
        for ii in range(len(fd)):
            i = fd[ii]
            if i.startswith("typedef "): # 记录类别
                s=re.findall('\w+', i)
                name = s[2]
                type = s[1]
                if len(s)==4:   # 带长度描述
                    count=s[3]
                    if type=='char': # 是字符串
                        self.enum[name]={'type':'string',
                                         'len':int(count),
                                         'default':'""',
                                         'comment':self.parse_comment(ii)[0]}
                        continue
                    continue

                # 不带长度描述
                if type=='char': # 如果是字符，看前面的注释位置，有可能是枚举类型
                    comment, pos= self.parse_comment(ii)
                    if pos==ii-2: # 注释在正上方，是字符类型
                        self.enum[name]={'type':'char',
                                         'default':"''",
                                         'comment':comment}
                        continue
                    else:       # 注释不在正上方，是枚举类型
                        self.enum[name]={'type':'enum of '+type,
                                         'comment':comment}
                        enums={}
                        default=None
                        for j in range(pos, ii):
                            l=fd[j]
                            if l.startswith('#define'):
                                l=l.split()
                                val = " ".join(l[2:])
                                if default is None:
                                    default = val
                                enums[l[1]]={'value': val,
                                             'comment':fd[j-1][3:].strip().decode(self.locale)}
                        self.enum[name]['values']=enums
                        self.enum[name]['default']=default
                        continue
                else:           # 其他正常类型
                    self.enum[name]={'type': type,
                                     'default': '0',
                                     'comment': self.parse_comment(ii)[0]}
        

    def parse_struct(self):
        # 解析结构体定义
        self.struct={}

        fd = self.file_datastruct
        i=0
        while i< len(fd)-2:
            i+=1
            l=fd[i].strip()
            if l.startswith('struct '):
                name=l.split()[1]
                comment= fd[i-1].strip()[3:].decode(self.locale)
                fields={}
                while i< len(fd)-2:
                    i+=1
                    l=fd[i].strip()
                    if l.startswith('};'): break
                    if l.startswith("///"): continue
                    s=re.findall("\w+", l)
                    if len(s)==2:
                        ftype=s[0]
                        fname=s[1]
                        fcomment=fd[i-1].strip()[3:].decode(self.locale)
                        fields[fname]={'type':self.enum[ftype],
                                       'default':self.enum[ftype]['default'],
                                       'comment':fcomment}
                self.struct[name]={'comment':comment,
                                   'fields':fields}

    def parse_comment(self, where):
        # 解析datatype文件的注释，返回注释和位置
        #print self.locale, '##############'
        fd = self.file_datatype
        while where>0:
            where-=1
#            import pdb; pdb.set_trace()
            if fd[where].startswith("////") and fd[where-1].startswith("///") and fd[where-2].startswith('////'):
                comment = fd[where-1][4:].strip()
                return comment.decode(self.locale), where+1
        raise Exception("failed to find comment")

    def get_enumeration(self):
        return self.enum

    def get_struct(self):
        return self.struct

def parse(fn1, fn2,locale='utf-8'):
    #print 'in parse..............'
    p=Parse(fn1, fn2,locale)
    return p.get_struct(),p.get_enumeration()

if __name__=="__main__":
    p=Parse("../inc/ThostFtdcUserApiDataType.h",
            "../inc/ThostFtdcUserApiStruct.h",locale='gbk') ##上期直接下载的文件是gbk编码
    from pprint import pprint
    print "enumeration:",
    pprint(p.get_enumeration())
    #print "struct:"
    #pprint(p.get_struct())

