#include <cstdlib>
#include <iostream>


using namespace std;


int ciag(int n)
{
    if(n==0)
        return 0;
    else
        return ciag(n-1)+1+(n-1)*2;
}


int main(int argc, char *argv[])
{
        int n;
        cout << "ktory wyraz ciagu ?: ";
        cin >> n;
        cout << ciag(n);
        return 0;
}
