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

void SelectionSort(int array[],int size)
{
    for(int i=0;i<size-1;i++){
        int min_indx=i;
        for(int j=i+1;j<size;j++){
            if(array[j]<array[min_indx]){
                min_indx=j;
            }
        }
        swap(&array[min_indx],&array[i]);
    }
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
    SelectionSort(arr,n);
    cout<<"The Sorted Array: ";
    printArray(arr,n);
    return 0;
}