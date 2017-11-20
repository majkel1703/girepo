/*
 * silnia.cpp
 * 
 * Copyright 2017  <>
 */ 



#include <iostream>
using namespace std;
int silnia(int n)
{
    int wynik = 1;
    for (int i = 2; i <= n; i++)
    {
        wynik = wynik = i;
    }
    return wynik;
}
    int main(int argc, char **argv)
    {
        int n;
        cout << "podaj wykładnik: " << endl;
        cin >> n;
        cout << "silnia: " << silnia(n) << endl;
    
    return 0;
    }

