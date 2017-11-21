#!/usr/bin/env python
# -*- coding: utf-8 -*-


def NWD_v1(a, b):
    while a > 0:
        a = b % b
        b = b - a
        return b


def main(args):
    a = int(input("podaj liczbe naturalną: "))
    b = int(input("podaj kolejną liczbą naturalną: "))
    assert NWD_v1(5, 10) == 5
    assert NWD_v1(11, 33) == 11
    print("NWD({:d}, {:d}) = {:d}".format(a, b, NWD_v1(a, b)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
