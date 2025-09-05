#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Input: nums = [1,2,3,1]

// Output: true

// Input: nums = [1,2,3,4]

// Output: false


bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> unmap;

    for (int val : nums)
    {
        if (!unmap.count(val))
        {
            unmap.insert({val, 1});
        }
        else
        {
            return true;
        }
    }

    return false;
}

int main()
{
    vector<int> vec = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    if (containsDuplicate(vec))
    {
        cout << "true" << "\n";
    }
    else
    {
        cout << "false" << "\n";
    }
    return 0;
}