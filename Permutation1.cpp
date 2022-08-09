// to return all the permutations of all distinct intergers present in the given array.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
// Using Recursion
/*
void solve(vector<int> &arr, int idx)
{
    if(idx == arr.size()){          // base case
        ans.push_back(arr);
        return;
    }
    for(int i=idx; i<arr.size(); i++)
    {
        swap(arr[i],arr[idx]);
        solve(arr, idx+1);
        swap(arr[i],arr[idx]);
    }
    return;
}
*/

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &a: arr)
        cin >> a;
    // solve(arr,0);
    // Using STL
    sort(arr.begin(),arr.end());
    do{
        ans.push_back(arr);
    } while(next_permutation(arr.begin(), arr.end()));
    for(auto i : ans){
        for(auto j : i){
            cout << j << " "; 
        }
        cout << "\n";
    }
    return 0;
}