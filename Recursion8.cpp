// To find the number of ways to reach an endpoint from the starting point in a gameboard.

#include<bits/stdc++.h>
using namespace std;

int CountPath(int s, int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int count = 0;
    for(int i=1; i<=6; i++)
    {
        count += CountPath(s+i,e);
    }
    return count;
}

int main()
{
    cout << CountPath(0,3);
    return 0;
}