#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <unordered_set>
#include <algorithm>

using namespace std;

string sortVowels(string s)
{
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    vector<int> idx;
    vector<char> c;

    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);
        if (vowels.count(ch))
        {
            idx.push_back(i);
            c.push_back(s[i]);
        }
    }

    sort(c.begin(), c.end());

    int k = 0;
    int l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (k < idx.size() && idx[k] == i)
        {
            result += c[l++];
            k++;
        }
        else
        {
            result += s[i];
        }
    }
    return result;
}

int main()
{
    string s = "lEetcOde";
    string result = sortVowels(s);
    cout << result << endl;
    return 0;
}