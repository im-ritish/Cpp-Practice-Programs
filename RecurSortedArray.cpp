// To check if a given array is sorted or not using recursion

#include<bits/stdc++.h>
using namespace std;

bool checkSort(int arr[], int n)
{
    if(n==1)
        return true;

    return ((arr[0] < arr[1]) && checkSort(arr+1,n-1));
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    if(checkSort(arr,n))
        cout << "Array is sorted." << endl;
    else    
        cout << "Array is not Sorted." << endl;
    return 0;
}