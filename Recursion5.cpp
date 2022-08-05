// to print all substrings of a given substring

#include<bits/stdc++.h>
using namespace std;

void SubSequence(string s, string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    SubSequence(s.substr(1),ans);
    SubSequence(s.substr(1),ans+ch);
}

// to print all substrings along with ASCII values of a given substring

void SubSeq(string s, string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int ascii = ch;
    SubSeq(s.substr(1),ans);
    SubSeq(s.substr(1),ans + ch);
    SubSeq(s.substr(1),ans + (to_string(ascii)));

}

int main()
{
    SubSequence("abc","");
    cout << endl;
    SubSeq("abc","");
    return 0;
}