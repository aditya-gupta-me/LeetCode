#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

// "abcabcbb"
// -> 3
// "bbbbb"
// -> 1
// "pwwkew"
// -> 3

int lengthOfLongestString(string s)
{
    set<string> newSet;

    string str = "";
    int ptr = 0;
    int i = 0;

    while (i < s.length())
    {
        // cout << "First time: " << str << endl;
        if (str.find(s[i]) == string::npos)
        {
            str += s[i];
            // cout << "updated time: " << str << endl;

            newSet.insert(str);
            i++;
        }
        else
        {
            ptr++;
            i = ptr;
            str = "";
        }
    }

    int maxLen = 0;
    for (string str : newSet)
    {
        if (s.find(str) != string::npos)
        {
            int l = str.length();
            maxLen = max(l, maxLen);
        }
        // cout << str << " ";
    }

    // cout << endl;
    return maxLen;
}

int main()
{
    string s = "abcabcbb";
    int result = lengthOfLongestString(s);
    cout << result << endl;
    return 0;
}