#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#


def main(args):
    a = 0
    while a < 1 or a > 99:
        a = int(input("podaj liczbę: "))
        i = 2
        while i <= a:
            if a == i:
                print("liczba parzysta")
                break
            i += 2
        if i > a:
            print ("liczba nieparzysta")

    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
