#include <iostream>

using namespace std;

int liczba, krok;

void zwieksz () {
    liczba += krok;
    
}
int main(int agrc, char **argv)
{
    cout << "podaj liczbe i krok: ";
    cin >> liczba >> krok;
    
    cout << "liczba i krok: " << liczba << " " << krok << endl;
    zwieksz ();
    cout << "liczba i krok: " << liczba << " " << krok << endl;
    
    return 0;
}
