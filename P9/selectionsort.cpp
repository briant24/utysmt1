#include <iostream>
using namespace std;

int main(){
    int totalitem = 5;
    int arr[totalitem] = {5,3,6,2,1};

    for(int i = 0; i < totalitem - 1; i++){
        int idxK = i;
        for (int j = i+1; j < totalitem; j++)
        {
            if (arr[idxK] > arr[j])
            {
                idxK = j;
            }
            
        }
        int temp = arr[i];
        arr[i] = arr[idxK];
        arr[idxK] = temp;
    }
    for (int i = 0; i < totalitem; i++)
    {
        cout << arr[i] << "";
    }
    return 0;
}