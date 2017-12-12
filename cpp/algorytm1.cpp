
#include <iostream>

using namespace std;



int main(int argc, char **argv)



{
	int n;
    int a;
    int iloczyn = 1;
    int i = 1;
    cout << "podaj wartość n: " << endl;
    cin >> n;
   while (i != n)
   {
       cout << " podaj wartość a: " << endl;
       cin >> a;
       iloczyn = iloczyn * a;
       i = i + 1;
   }
   cout << "wynik mnożenia wynosi: " << iloczyn << endl;
   
	return 0;
}

