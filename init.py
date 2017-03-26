#!/usr/bin/python

import sys
import subprocess as sbp

if __name__ == '__main__':
    if len(sys.argv) == 1:
        print('Error!')
        sys.exit()

    dir_name = sys.argv[1]
    sbp.call(['mkdir', dir_name])

    for i in range(4):
        sbp.call(['cp', './template.cpp', './{}/{}.cpp'.format(dir_name, chr(ord('a')+i))])
