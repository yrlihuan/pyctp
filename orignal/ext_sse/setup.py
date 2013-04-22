#!/usr/bin/env python

from distutils.core import setup, Extension

_ctp_Md = Extension('_ctp_Md',
                    define_macros = [('MAJOR_VERSION', '1'),
                                     ('MINOR_VERSION', '0')],
                    include_dirs = ['../ctp_sse/api/trade/linux64/public'],
                    libraries = ['thostmduserapiSSE'],
                    library_dirs = ['../ctp_sse/api/trade/linux64/lib/'],
                    sources = ['_ctp_Md.cpp', 'struct.cpp', 'wrapper_Md.cpp'])

_ctp_Trader = Extension('_ctp_Trader',
                    define_macros = [('MAJOR_VERSION', '1'),
                                     ('MINOR_VERSION', '0')],
                    include_dirs = ['../ctp_sse/api/trade/linux64/public'],
                    libraries = ['thosttraderapiSSE'],
                    library_dirs = ['../ctp_sse/api/trade/linux64/lib/'],
                    sources = ['_ctp_Trader.cpp', 'struct.cpp', 'wrapper_Trader.cpp'])

_ctp_L2 =  Extension('_ctp_Level2User',
                    define_macros = [('MAJOR_VERSION', '1'),
                                     ('MINOR_VERSION', '0')],
                    include_dirs = ['../ctp_sse/api/trade/linux64/public'],
                    libraries = ['level2userapi'],
                    library_dirs = ['../ctp_sse/api/trade/linux64/lib/'],
                    sources = ['_ctp_Level2User.cpp', 'l2struct.cpp', 'wrapper_Level2User.cpp'])



setup (name = 'pyctp_ext_sse',
       version = '1.0',
       description = 'python ctp extension',
       author = '',
       author_email = '',
       url = '',
       long_description = '',
       ext_modules = [_ctp_Md, _ctp_Trader, _ctp_L2])
