#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int array[], int size) 
{
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void BubbleSort(int array[],int size)
{
    int counter = 1;
    while(counter<size)
    {
        for(int i=0; i < size - counter; i++)
        {
            if(array[i]>array[i+1])
            {
                swap(&array[i],&array[i+1]);
            }
        }
        counter++;
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
    BubbleSort(arr,n);
    cout<<"The Sorted Array: ";
    printArray(arr,n);
    return 0;
}