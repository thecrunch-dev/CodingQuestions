#include <iostream>
#include <algorithm>
using namespace std;

int AllDuplicates(int arr[], int n)
{
    //   for (int i = 0; i < n; i++)
    //    {
    //     for (int j = i+1; j < n; j++)
    //     {
    //        if(arr[i]==arr[j]){
    //             cout << arr[i] << " ";
    //             break;
    //         }
    //     }
    //    }
    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << arr[i] << " ";
            i++;
        }
    }
}

int main()
{
    int arr[10] = {1, 2, 5, 6, 5, 9,6,7};
    AllDuplicates(arr, 8);
}