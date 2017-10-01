#include <cstdlib>
#include <iostream>
using namespace std;

int main(int arge, char *argv[])
{
    int PI, R;
    int pole_kola;
    PI = 3;
    cout << "podaj promien ko³a: ";
    cin >> R;
    pole_kola = PI * R * R;
    cout << "pole kola o promieniu R wynosi" + pole_kola << endl <<endl;
}

