#include <bits/stdc++.h>

using namespace std;

int solve(string str)
{
    int n = str.length();
    string s = "";
    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        unordered_set<int> unique;

        for (int j = i; j < n; j++)
        {
            if (unique.count(str[j]))
            {
                maxLen = max(maxLen, j - i);
                break;
            }
            s += str[j];
            cout << s << "\n";

            unique.insert(str[j]);
        }

        s = "";
    }

    return maxLen;
}

int main()
{
    string str = "abcabcbb";
    cout << solve(str);
    return 0;
}