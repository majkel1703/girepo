#!/usr/bin/env python
# -*- coding: utf -8 -*-

#osoba = "Wiz Khalifa"
osoba = input("jak sie nazywasz? ")
wiek = input ("ile masz lat? ")
print("witaj,", osoba, "!")
print("Urodziłeś się w ", 2017 - int(wiek))
rok_pythona = 1991
wiek_pythona = 2017 - rok_pythona

if wiek_pythona > wiek(wiek):
    print("jestem starszy!")
    elif rok_pythona< wiek_pythona:
    print("jesteś starszy")
    else:
        print ("jesteśmy w tym samym wieku")
