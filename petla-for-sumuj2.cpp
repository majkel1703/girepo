
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int ilosc=0;
    int suma=0;
    int liczba=0;
    cout << "wprowadzaj kolejne liczby: " << endl;
    //for(;;)
    while (1)
{
    cin >> liczba;
    suma += liczba;
    ilosc++;
    cout << " podano: " << ilosc << endl;
    if ( suma > 100)
break;
};
cout << "suma liczb: " << suma << endl;
cout << "ilość podanuch liczb" << ilosc << endl;
	return 0;
}

