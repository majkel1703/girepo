#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    while ( a > 0)
    {
        a = a % b;
        b = b - a;
    }
    return b;
}

int main(int argc, char **argv)
{
	int a, b;
	cout << "Podaj licznik : " << endl;
	cin >> a;
	cout << "Podaj mianownik: " << endl;
	cin >> b;
    int lic = a / nwd(a, b);
    int mia = b / nwd(a, b);
    cout << lic << " : " << mia << endl;
	
	return 0;
}
