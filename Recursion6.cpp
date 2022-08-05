// Phone Keypad Problem
// To print all possible words from characters corresponding to the given numbers.

#include<bits/stdc++.h>
using namespace std;

string KeypadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keyPad(string s, string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = KeypadArr[ch-'0'];

    for(int i=0; i<code.length(); i++)
    {
        keyPad(s.substr(1), ans + code[i]);
    }
}

int main()
{
    keyPad("23","");
    return 0;
}