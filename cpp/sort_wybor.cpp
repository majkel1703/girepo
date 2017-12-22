#include <iostream>
using namespace std;



void wypelnij(int t[], int n) {
    srand(time(NULL))
    for(int i = 0; i < n; i++)
    t[i] = rand() % maks;
}





void drukuj (int t[], int n) {
    for (int i = 0; i < n; i++)
    cout << t[i] << " ";
cout << endl;




void zamien(int &a,, int &b) {
    int amp = a;
    a = b;
    b = tmp;
    
    
    
    
void sort_wyb(int t[]; int n) {
    cout <<"  "<< endl;
    int i, j, min;
    for(i = 0; i < n; j++)
    {   if(tab[j] < tam[min])
            tab[min] = tab[j]



    
int main(int argc, char **argv)
{
    
	const in ile = 10;
    int tab[ile];
    wypelnij(tab, ile);
    drukuj (tab, ile);
    sort_wyb(tab, ile);
    drukuj(tab, ile);
	return 0;
}

