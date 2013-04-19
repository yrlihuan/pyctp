#!/usr/bin/env python
import my.entry
import logging

# create logger
logger = logging.getLogger('ctp.MdSpiDelegate')
logger.setLevel(logging.DEBUG)

# create console handler and set level to debug
ch = logging.StreamHandler()
ch.setLevel(logging.DEBUG)

# add ch to logger
logger.addHandler(ch)

if __name__ == "__main__":
  my.entry.save_demo()

  input()
