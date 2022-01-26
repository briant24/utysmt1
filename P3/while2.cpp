#include <iostream>
using namespace std;

int main(){
    int i =5;
    while (i >= 3)
    {
        cout << "Berulang while" << endl;
        i--;
    }
    int j = 0;
    do
    {
        cout << "Berulang do while" << endl;
        j++;
    } while (j <= 3);
    
    return 0;
}