#!/usr/bin/env python
# -*- coding: utf-8 -*-

import random

def losuj(ileliczb, maksliczb):

    typy = set()  # pusta lista

    ile = 0  # ilość unikalnych liczb

    # for i in range(ileliczb):
    while ile < ileliczb:
        liczba = (random.randint(0, maksliczb))
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1

    #print(typy)
    return liczby
    def pobierz_typy(ileliczb):
        typy = set()
        ile = 0
           while ile < ileliczb:
        typ = int(input("podaj typy: "))
        if typ not in typy:
            typy. add(typ)
            ile += 1


def main(args):
    ileliczb = int(input("Ile liczb chcesz zgadywać? "))
    maksliczb = int(input("Maksymalna losowana liczba: "))

    liczby = losuj(ileliczb, maksliczb)
    typy = pobierz_typy(ileliczb)

    # pobieranie typów użytkownika

    trafione = set(liczby) & tpypy
    print("trafiłeś "len(trafione)

    for i in range(ileliczb):
        typ = input("podaj typ: ")
        typy.add(typ)

    print(typy)

    return 0


if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
