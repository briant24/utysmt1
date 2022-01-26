#include <iostream>
using namespace std;

int main() {
    cout << "Perulangan" << endl;   
    for (int i = 1; i < 6; i++)
    {
        cout << i << endl;
    }
    cout << "==========" << endl;   
    for (int i = 5; i > 1; i--)
    {
        cout << i << endl;
    }
    cout << "==========" << endl;   
    for (int j = 2; j < 10; j = j * 2)
    {
        cout << j << endl;
    }
    return 0;
}