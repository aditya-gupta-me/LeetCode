#include <iostream>
#include <vector>

using namespace std;

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    vector<int> result;

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            if (result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
            j++;
        }
        else // nums1[i] == nums2[j]
        {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements
    while (i < n)
    {
        if (result.empty() || result.back() != nums1[i])
            result.push_back(nums1[i]);
        i++;
    }

    while (j < m)
    {
        if (result.empty() || result.back() != nums2[j])
            result.push_back(nums2[j]);
        j++;
    }

    return result;
}

int main()
{
    vector<int> vec1 = {3, 4, 6, 7, 9, 9};
    vector<int> vec2 = {1, 5, 7, 8, 8};

    vector<int> result = unionArray(vec1, vec2);

    for (int val : result)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}