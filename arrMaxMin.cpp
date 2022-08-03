#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int MaxNum=INT_MIN;
    int MinNum=INT_MAX;

    for(int i=0;i<n;i++){               // Or replace If Statements with following:
        if(MaxNum<arr[i]){
            MaxNum=arr[i];              // MaxNum=max(MaxNum,arr[i]);
        }
        if(MinNum>arr[i]){
            MinNum=arr[i];              // MinNum=min(MinNum,arr[i]);
        }
    }
    cout<<MaxNum<<" "<<MinNum;
    return 0;
}
