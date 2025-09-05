#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, int> count;

    for (char c : s)
        count[c]++;
    for (char c : t)
        count[c]--;

    for (auto &pair : count)
    {
        if (pair.second != 0)
            return false;
    }

    return true;

    // alternate optimized solution
    // if (s.length() != t.length()) return false;

    // vector<int> count(26, 0); // only for lowercase a-z

    // for (int i = 0; i < s.length(); i++) {
    //     count[s[i] - 'a']++;
    //     count[t[i] - 'a']--;
    // }

    // for (int i = 0; i < 26; i++) {
    //     if (count[i] != 0) return false;
    // }

    // return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t))
    {
        cout << "true" << "\n";
    }
    else
    {
        cout << "false" << "\n";
    }
    return 0;
}