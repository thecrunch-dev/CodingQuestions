#include <iostream>
using namespace std;

int Duplicates(int arr[], int size){
    int ans = 0;

    // XoR ing all the elements
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }

    // XOR ans with [1,N-1]
    for (int i = 0; i < size; i++)
    {
        ans = ans^i;
    }
    return ans;
}




int main (){
   int arr[6] = {1,2,4,4,5,3};
   int ans = Duplicates(arr,6);
   cout << ans;
}