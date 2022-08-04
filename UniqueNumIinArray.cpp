#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}

int setBit(int num, int pos)
{
    return (num | (1<<pos));
}

// Write a program to find a unique number in an array where all numbers except one, are present twice.

int uniqueOne(int arr[],int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

// Write a program to find 2 unique numbers in an array where all numbers except two, are present twice.

void uniqueTwo(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor=0;
    for(int i=0; i<n; i++)
    {
        if(getBit(arr[i], pos-1))
        {
            newxor=newxor^arr[i];
        }
    }
    cout << newxor << " " << (tempxor ^ newxor) << endl;
}

// Write a program to find a unique number in an array where all numbers except one, are present thrice.

int uniqueThree(int arr[], int n)
{
    int result=0;
    for(int i=0; i<64; i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            if(getBit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3 != 0)
        {
            result = setBit(result,i);
        }
    }
    return result;
}

int main()
{
    int arr1[] = {1,2,4,2,6,1,6,7,8,7,8};
    cout << uniqueOne(arr1,11) << endl;

    int arr2[] = {1,2,3,2,6,1,6,7,8,7,8,5};
    uniqueTwo(arr2,12);

    int arr3[] = {1, 2, 3, 9, 1, 2, 3, 1, 2, 3};
    cout << uniqueThree(arr3,10) << endl;

    return 0;
}