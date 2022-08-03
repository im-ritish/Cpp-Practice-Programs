/* Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S. */
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
    {
        cin>>arr[i];
    }
    int S;
    cout<<"Enter the given sum: ";
    cin>>S;

    int i=0, j=0, start=-1, end=-1;
    int currSum=0;

    while(j<n && currSum + arr[j] <= S)
    {
        currSum += arr[j];
        j++;
    }

    if(currSum == S)
    {
        cout<< i+1 << " " << j << endl;
        return 0;
    }

    while(j<n)
    {
        currSum += arr[j];
        while(currSum > S)
        {
            currSum -= arr[i];
            i++;
        }
        if(currSum == S)
        {
            start = i+1;
            end = j+1;
            break;
        }
        j++;
    }

    cout << start << " " << end << endl;
    return 0;
}

