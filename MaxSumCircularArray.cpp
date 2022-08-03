#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n)
{
    int currSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        currSum += arr[i];
        if(currSum < 0)
        {
            currSum=0;
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
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

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadane(arr,n);
    cout << max(wrapsum,nonwrapsum) << endl;
    return 0;
}