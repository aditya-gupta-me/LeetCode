#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    stack<int> st;
    vector<int> vec(nums2.size(), -1);
    unordered_map<int, int> um;
    vector<int> result;
    int len = nums2.size();

    for (int i = vec.size() - 1; i >= 0; i--)
    {
        while (st.size() > 0 && nums2[i] >= st.top())
        {
            st.pop();
        }

        if (st.size() > 0)
        {
            vec[i] = st.top();
        }

        st.push(nums2[i]);
    }
    for (int i = 0; i < len; i++)
    {
        um.insert({nums2[i], vec[i]});
    }

    for (const int &num : nums1)
    {
        result.push_back(um[num]);
    }

    return result;
}


int main()
{
    vector<int> nums1 = {2, 4};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> result = nextGreaterElement(nums1, nums2);

    for (int val : result)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}