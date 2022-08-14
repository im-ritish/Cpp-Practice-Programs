#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector < pair<int, int> > v;
    for(int i=0; i<n; i++)
    {
        // pair<int, int> p;
        // p.first=arr[i];
        // p.second=i;

        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), myCompare);

    for(int i=0; i<v.size(); i++)
    {
        arr[v[i].second] = i;
    }

    for(int i=0; i<v.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}