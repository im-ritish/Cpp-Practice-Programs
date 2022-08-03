#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid = (start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element need to be find: ";
    cin>>key;
    if(BinarySearch(arr,n,key) == -1)
        cout<<"The element not found!!";
    else
        cout<<"The element found at "<<BinarySearch(arr,n,key)<<" Index.";
    return 0;
}