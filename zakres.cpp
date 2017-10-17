#include <iostream>

using namespace std;



int zwieksz (int liczba, int krok) {
    liczba += krok;
    krok = 3 * krok;
    return krok;
    
}
void zwieksz2(int &liczba, int &krok) {
    liczba += krok;
    krok = 3 * krok;
}
int main(int agrc, char **argv)
{
    int liczba, krok;
    cout << "podaj liczbe i krok: ";
    cin >> liczba >> krok;
    cout << "liczba i krok: " << liczba << " " <<
    &liczba << endl;
    //zwieksz2 (liczba, krok);
    //cout << "liczba i krok: " << zwieksz (liczba, krok) << " " <<
    //krok << endl;
    
    return 0;
}
