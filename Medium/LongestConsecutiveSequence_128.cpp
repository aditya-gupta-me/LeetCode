#include <iostream>
#include <vector>

using namespace std;

// brute-force approach
bool linearSearch(vector<int> arr, int e)
{
    for (int val : arr)
    {
        if (e == val)
        {
            return true;
        }
    }
    return false;
}

int longestConsecSequence(vector<int> vec)
{
    int longestSeq = 1;
    int n = vec.size();

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        int element = vec[i];

        while (linearSearch(vec, element + 1) == true)
        {
            count++;
            element = element + 1;
        }

        longestSeq = max(longestSeq, count);
    }

    return longestSeq;
}

int main()
{

    vector<int> vec = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

    int result = longestConsecSequence(vec);

    cout << result << endl;
    return 0;
}