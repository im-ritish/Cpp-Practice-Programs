#include<bits/stdc++.h>
using namespace std;

bool CheckPairSum(int arr[], int n, int k)
{
    /* for(int i=0; i<n-1; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(arr[i] + arr[j] == k)
            {
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false; */
    int low=0;
    int high=n-1;

    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cout<<"Enter the target sum: ";
    cin>>k;

    cout<<CheckPairSum(arr,n,k)<<endl;
    return 0;
}