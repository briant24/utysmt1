#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5,3,6,2,1};

    for (int i = 0; i < 5; i++){
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "";
    }
    return 0;
}