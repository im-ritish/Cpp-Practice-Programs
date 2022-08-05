// To remove duplicate characters (continuos) from a given string using recursion

#include<bits/stdc++.h>
using namespace std;

string RemoveDuplicate(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = RemoveDuplicate(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main()
{
    cout << RemoveDuplicate("aaaaaaabbbbbbbbbbcccccccccddddddddeeeeeeeeee");
    return 0;
}