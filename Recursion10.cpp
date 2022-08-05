// Tiling problem
// Find the number of ways to tile the floor with 1x2 and 2x1 tiles.
// Idea: Tile[i] = Tile[i-1] (1x1) + Tile[i-2](1x2)

#include<bits/stdc++.h>
using namespace std;

int tilingways(int n)
{
    if(n<3)
    {
        return n;
    }
    
    return tilingways(n-1) + tilingways(n-2);
}

int main()
{
    cout << tilingways(4);
    return 0;
}