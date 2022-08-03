#include<bits/stdc++.h>
using namespace std;
#define N 4

void transpose(int arr1[][N], int arr2[][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)   
        {
            arr2[i][j] = arr1[j][i];
        } 
    }
}

int main()
{
    int arr[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
    int transpose_matrix[N][N];
    transpose(arr, transpose_matrix);
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << transpose_matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}