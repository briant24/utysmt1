#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int totalitem = 5;
    int arr[totalitem] = {5,3,6,2,1};
    sort(arr, arr + totalitem);
    for (int i = 0; i < totalitem; i++)
    {
        cout << arr[i]<< " ";
    }
    
    return 0;
}