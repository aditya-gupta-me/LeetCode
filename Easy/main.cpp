#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> vec, int k)
{
    int n = vec.size();
    int i = 0, j = 0, sum = 0;
    int maximum = 0;

    while (j < n)
    {
        sum += vec[j];

        if (j - i + 1 < k)
        {
            j++;
            continue;
        }

        else if (j - i + 1 == k)
        {
            maximum = max(sum, maximum);

            sum -= vec[i];
            i++;
            j++;
        }
    }

    return maximum;
}

int main()
{
    vector<int> vec = {2, 3, 5, 2, 9, 7, 1};

    vector<int> a;

    int totalSum = 0;
    for (int i = 0; i < vec.size() - 2; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += vec[i + j];
        }

        totalSum = max(totalSum, sum);
        // cout << endl;
    }

    cout << totalSum << endl;

    int result = maxSubArray(vec, 3);
    cout << result << endl;
    return 0;
}