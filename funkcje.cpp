#include <iostream>
using namespace std;

void sumuj(int a, int b)
    {
        cout << "suma: " << a + b << endl;
    }
    void odejmij(int a, int b)
    {
        cout << "różnica: " << a - b << endl;
    }
    void mnoz(int a, int b)
    {
        cout << "iloczyn: " << a * b << endl;
    }
void podziel(int a, int b)
    {
        cout << "iloraz: " << a / b << endl;
    }
    if (b==0)
    cout << "nie mozna dzielić przez zero" endl;
int main(int argc, char **argv)
{
	int a, b;
    cout << "podaj liczby: ";
    cin >> a >> b;
    sumuj(a, b);
    odejmij(a, b);
    mnoz(a, b);
    podziel(a, b);
	return 0;
}

