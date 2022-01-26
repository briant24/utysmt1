#include <iostream>
using namespace std;
void printArrayString(int size, string array[]){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    
}
int main(){
    string produk[3] = {"lenovo", "asus", "pubg"};
    printArrayString(3, produk);
    cout << endl;
    produk[1] = "rog";
    printArrayString(3, produk);
    return 0;
}