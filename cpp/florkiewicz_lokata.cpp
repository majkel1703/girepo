#include <iostream>

using namespace std;

int oszczedzanie(int n)
{
int podstawa = 100;
int kasa =  100;
int i;
for(i < n, i++)
{
    kasa += 10;
    podstawa += podstawa;
}	
return podstawa;
int main(int argc, char **argv)
{
    int n;
cout << kwota << "ile miesięcy będzie oszczędzał pan Nowak: " >> endl;
cin >> n;
cout << "kasa: " << oszczedzanie(n) << endl;
	return 0;
}

