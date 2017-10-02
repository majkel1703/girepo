
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i;
    int j;
    for(i =2; i < 100; i+=2)
    {
        cout << '*';
        if ( i % 10 == 0 )
        {
            for (j=0; j<9; j++)
            cout << '#';
            cout << endl;
    }
}
	return 0;
}

