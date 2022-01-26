#include <iostream>
using namespace std;

int main(){
    int i =0;
    while (i <= 5)
    {
        cout << "halo" << endl;
        i++;
    }
    cout << "==================" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << "Berulang for" << endl;
    }
    cout << "==================" << endl;
    int k=0;
    do
    {
        cout << "coba dulu" << endl;
        k++;
    } while (k <=5);
    
    return 0;
}