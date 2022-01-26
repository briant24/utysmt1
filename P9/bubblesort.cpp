#include <iostream>
using namespace std;

int main(){
    int totalitem = 5;
    int arr[totalitem] = {5,3,6,2,1};

    for (int i = 0; i < totalitem; i++){
        for (int j = 0; j < totalitem - i - 1; j++){
            int x = j +1;
            if (arr[j]> arr[x]){
                int temp = arr[x];
                arr[x] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < totalitem; i++)
    {
        cout << arr[i] << "";
    }
    return 0;
}