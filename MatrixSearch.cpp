//optimised approach using top right element as starting point. The matrix rows and columns are given sorted.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;

    int mat[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin >> mat[i][j];
    }

    int r=0, c=n-1;
    bool found=false;
    while(r<m && c>=0)
    {
        if(mat[r][c] == target)
        {
            found = true;
        }
        mat[r][c] > target ? c-- : r++;
    }
    if(found)
    {
        cout << "Element found at " << r-1 << " " << c << " position." << endl;
    }
    else
    {
        cout<< "NOT Found!!";
    }
    return 0;
}
