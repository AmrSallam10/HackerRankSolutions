#include<bits/stdc++.h>
using namespace std;

int minSubArrayValue(int arr[], int size)
{
    if (size == 0) return 0;

    int lastMinSum = arr[0];
    int minSum = arr[0];

    for (int i = 1 ; i < size ; i++)
    {
        int num = arr[i];
        int currentMin = min(num, num + lastMinSum);
        lastMinSum = currentMin;
        minSum = min(minSum, currentMin);
    }
    return minSum;
}


int main()
{
    int arr[] = {20, -7, -3, 9, -4, 6, -9, 10};
    int mini = minSubArrayValue(arr, sizeof(arr)/sizeof(int));
    cout<<mini;

    return 0;
}