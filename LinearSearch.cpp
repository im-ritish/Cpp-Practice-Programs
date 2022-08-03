#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
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
    cout<<"Enter the element to be find: ";
    cin>>key;
    if(LinearSearch(arr,n,key) == -1)
        cout<<"The element not found!!";
    else
        cout<<"The element found at "<<LinearSearch(arr,n,key)<<" Index.";
    return 0;
}