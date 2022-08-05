// Friends Pairing Problem
// There are n friends, we have to find all the pairings possible. Each person can be
// paired with only one person or does not pair with anyone.
// Idea: we have two options, i’th friend does not get paired or we have n-1 options
// to pair it with anyone.

#include<bits/stdc++.h>
using namespace std;

int FriendsPair(int n)
{
    if(n<3)
       return n;

    return FriendsPair(n-1) + ((n-1) * FriendsPair(n-2));
}

int main()
{
    cout << FriendsPair(4);
    return 0;
}