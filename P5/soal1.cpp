#include <iostream>
using namespace std;
int main()
    {
        int size = 10;
        int ganjil[size] = {1,3,5,7,9,11,13,15,17,19};
        for ( int a = 0; a < 10; a++)
        {
            cout << "Urutan ke - " << a << " = " << ganjil[a] << endl;
        }
        return 0;
    }