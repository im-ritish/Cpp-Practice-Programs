// Program to print the sum of subarrays OR print the maximum sum.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

/*  int curr_sum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        curr_sum = 0;
        for(int j=i; j<n; j++)
        {
            curr_sum += arr[j];
            // cout << curr_sum << endl;   //to print sums of subarrays
            maxSum = max(curr_sum,maxSum);  //to print maximum sum
        }
    }
    cout<<maxSum<<endl;  
*/
    // To print maximum sum using Kadane's Algorithm
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
    cout<<maxSum<<endl;
    return 0;
}