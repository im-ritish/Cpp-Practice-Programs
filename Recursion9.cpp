// Given a 2D grid, find the number of ways to reach (n-1, n-1). We can go to (i,j) from (i-1,j) and (i,j-1).

#include<bits/stdc++.h>
using namespace std;

int CountPathMaze(int n, int i, int j)
{
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return (CountPathMaze(n, i+1, j) + CountPathMaze(n, i, j+1));
}

int main()
{
    cout << CountPathMaze(3,0,0) << endl;
    return 0;
}