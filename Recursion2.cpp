// To replace "pi" in a given string with 3.14 using recursion

#include<bits/stdc++.h>
using namespace std;

void ReplacePi(string s)
{
    if(s.length() == 0)
    {
        return;
    }
    if(s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        ReplacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        ReplacePi(s.substr(1));
    }
}

int main()
{
    ReplacePi("pipppppiijpipiiiipi");
    return 0;
}