/*
 * nieparzyste.cpp
 * 
 * Copyright 2018  <>
 * 
 */
#include <iostream>

int main(int argc, char **argv)
{
	int i;
    int n;
    i = 1;
    cout<< "podaj n: " << endl;
    cin >> n;
    for (int i = 1; i < n; i += 2)
    {
        cout << i << endl;
    }
	return 0;
}

