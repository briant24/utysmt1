#include <iostream>
using namespace std;

int main(){
    int lenght = 6;
    int arr[lenght] = {5,3,7,1,0,9};
    int target = 0;

    for (int i = 0; i < lenght; i++)
    {
        cout << target << " Akan dibandingkan dengan " << arr[i] << endl;
        if (arr[i]==target)
        {
            cout << "Ditemukan!!"<< endl;
            break;
        }
        cout << "perbandingan tak cocok" << endl;
    }
    return 0;
}