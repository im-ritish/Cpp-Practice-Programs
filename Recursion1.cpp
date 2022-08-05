// To print a string in reverse order using recursion

#include<bits/stdc++.h>
using namespace std;

void Sreverse(string s)
{
    if(s.size() == 0)
    {
        return;
    }
    Sreverse(s.substr(1));
    cout << s[0];
}

int main()
{
    string str = "Ritish Kumar Singh";
    Sreverse(str);
    return 0;
}