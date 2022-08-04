#include<bits/stdc++.h>
using namespace std;

// function to check if a given number is power of 2
// bool Ispowerof2(int num)
// {
//     return !(num && (num & num-1));
// }

// function to  count the number of Ones in a given number
// int numberofones(int num)
// {
//     int cnt=0;
//     while(num != 0)
//     {
//         num = num & num - 1;
//         cnt++;
//     }
//     return cnt;
// }

// function to print the subsets of a given set
void subsets(int arr[], int n)
{
    for(int i=0; i<(1<<n); i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i & (1<<j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // int num;
    // cin >> num;

    // cout << Ispowerof2(num) << endl;
    // cout << numberofones(num) << endl;

    int arr[4]={1,2,3,4};
    subsets(arr,4);
    return 0;
}