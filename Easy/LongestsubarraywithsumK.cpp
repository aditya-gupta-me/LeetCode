#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int longestSubarray(vector<int> &nums, int k)
{
    int maxLength = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            if (sum == k)
            {
                maxLength = max(j - i + 1, maxLength);
            }
        }
    }

    return maxLength;
}

int main()
{
    vector<int> vec = {10, 5, 2, 7, 1, 9};
    int result = longestSubarray(vec, 15);
    cout << "The max length is : " << result << endl;
    return 0;
}