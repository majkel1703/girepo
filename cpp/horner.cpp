
#include <iostream>

using namespace std;





float horner_it(int &stopien; float tb[], float x)
{
    float wybnik = tb[0]
    for (int i = 1; i < stopien+1, i++ )
    {
        wynik = wynik * x + tb[i]
    }
    return wynik;
}
int main(int argc, char **argv
{
        int stopien = 3;
        float x;
        float tbwsp[4]
        cin >> x;
        for(int i = 0; i < 4; i++)
        {
            cout << "podaj wartość x: " << endl;
            cin >> tbwsp[i];
        }
        cout << "wynik: " << horner_it (stopien, twsp, x) << endl;
	return 0;
}

