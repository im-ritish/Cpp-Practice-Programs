#include<bits/stdc++.h>
using namespace std;

void printArray(int array[], int size) 
{
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void InsertionSort(int array[],int size)
{
    for(int i=1; i<size; i++)
    {
        int current = array[i];
        int j = i-1;
        while(array[j]>current && j>=0)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
    }
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
    InsertionSort(arr,n);
    cout<<"The Sorted Array: ";
    printArray(arr,n);
    return 0;
}