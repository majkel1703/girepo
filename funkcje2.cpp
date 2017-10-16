#include <iostream>
using namespace std;

int sumuj(int a, int b)
{
return  a + b;
}
int odejmij(int a, int b)
{
return a - b;
}

    int mnoz(int a, int b)
    {
    return a * b;
}

int podziel(int a, int b)
{

    if (b==0)
    cout << "nie mozna dzielić przez zero" << endl;
    else
    return a / b;
}
int main(int argc, char **argv)
{
	int a, b;
    cout << "podaj liczby: ";
    cin >> a >> b;
    cout << "suma: " << sumuj(a, b) << endl;
    cout << "różnica: " << odejmij(a, b) << endl;
    cout << "iloczyn" << mnoz(a, b) << endl;
    cout << "iloraz: " << podziel(a, b) << endl;
	return 0;
}
