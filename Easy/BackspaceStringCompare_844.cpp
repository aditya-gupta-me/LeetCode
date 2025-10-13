#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

bool backspaceCompare(string s, string t)
{
    stack<char> st1;
    stack<char> st2;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '#')
        {
            st1.push(s[i]);
        }

        else
        {
            st1.pop();
        }
    }

    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] != '#')
        {
            st2.push(t[i]);
        }

        else
        {
            st2.pop();
        }
    }

    while (!st1.empty() || !st2.empty())
    {
        if (st1.top() != st2.top())
        {
            return false;
        }

        st1.pop();
        st2.pop();
    }

    return true;
}

int main()
{
    string s = "a#c";
    string t = "b";

    if (backspaceCompare(s, t))
    {
        cout << "true" << endl;
    }

    else
    {
        cout << "false" << endl;
    }
    return 0;
}