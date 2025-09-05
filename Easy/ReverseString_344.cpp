#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverseString(vector<char> &s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

int main()
{
    vector<char> s = {'H', 'a', 'n', 'n', 'a', 'h'};

    reverseString(s);

    for (char c : s)
    {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}