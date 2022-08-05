// to move 'x' characters to the end of the given string

#include<bits/stdc++.h>
using namespace std;

string MoveX(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = MoveX(s.substr(1));
    if(ch == 'x')
    {
        return ans+ch;
    }
    return ch+ans;
}

int main()
{
    cout << MoveX("axxxxdghsjcgdxxfgdhxxe");
    return 0;
}