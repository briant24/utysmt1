#include <iostream>
using namespace std;
void printArrayString(int size, string array[]){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
int main(){
    int size = 3;
    string buah[size] = {};
    for (int i = 0; i < size; i++)
    {
        string inputBuah = "";
        cout << "Input buah : ";
        cin >> inputBuah;
        buah[i] = inputBuah;
        cout << endl;
        printArrayString(size, buah);
        size++;
    }
    
    

    return 0;
}