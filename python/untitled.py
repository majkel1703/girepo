#!/usr/bin/env python
# -*- coding: utf-8 -*-

def sort_wstaw(lista):
	fot i in range(1, len(lista)):
 		el = lista[i]
 		k = i - 1
 		while k >= 0 lista[k] > el:
 			lista[k + 1] = lista[k]
 			k = 1



def main(args):
	lista = [4, 3, 7, 0, 2, 3, ,1, 9]

def Insert_sort(A):
    for i in range(1,len(A)):
        klucz = A[i]
        j = i - 1
        while j>=0 and A[j]>klucz:
            A[j + 1] = A[j]
            j = j - 1
        A[j + 1] = klucz


        if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
