#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma=0;
    int liczba=0;
    cout << "wprowadzaj kolejne liczby: " << endl;
    while (1)
    {
        cin >> liczba;
        suma += liczba;
            if ( suma > 74)
            break;
    };
    cout << "suma liczb: " << suma << endl;
	return 0;
}
