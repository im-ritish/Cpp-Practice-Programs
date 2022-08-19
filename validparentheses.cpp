#include<bits/stdc++.h>
using namespace std;

bool ValidParentheses(string s)
{
    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            st.push(ch);
        }
        else
        {
            if(!st.empty())
            {
                char top=st.top();
                if((ch == ')' && top == '(')|| (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    cout << ValidParentheses(s);
    return 0;
}