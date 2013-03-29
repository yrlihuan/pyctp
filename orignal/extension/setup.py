#!/usr/bin/env python

from distutils.core import setup, Extension

_ctp_Md = Extension('_ctp_Md',
                    define_macros = [('MAJOR_VERSION', '1'),
                                     ('MINOR_VERSION', '0')],
                    include_dirs = ['../ctp', '../ctp/api/trade/linux64/public'],
                    libraries = ['thostuser'],
                    library_dirs = ['../ctp/api/trade/linux64/lib/'],
                    sources = ['_ctp_Md.cpp', 'struct.cpp', 'wrapper_Md.cpp'])

_ctp_Trader = Extension('_ctp_Trader',
                    define_macros = [('MAJOR_VERSION', '1'),
                                     ('MINOR_VERSION', '0')],
                    include_dirs = ['../ctp', '../ctp/api/trade/linux64/public'],
                    libraries = ['thosttrade'],
                    library_dirs = ['../ctp/api/trade/linux64/lib/'],
                    sources = ['_ctp_Trader.cpp', 'struct.cpp', 'wrapper_Trader.cpp'])


setup (name = 'pyctp_ext',
       version = '1.0',
       description = 'python ctp extension',
       author = '',
       author_email = '',
       url = '',
       long_description = '',
       ext_modules = [_ctp_Md, _ctp_Trader])
