#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> decrypt(vector<int> &code, int k)
{
    vector<int> result;
    int size = code.size();

    if (k == 0)
    {
        return vector<int>(size, 0);
    }

    for (int i = 0; i < size; i++)
    {
        if (k > 0)
        {
            int sum = 0;
            for (int j = 1; j <= k; j++)
            {
                sum += code[(i + j) % size];
            }
            result.push_back(sum);
        }

        else if (k < 0)
        {
            int sum = 0;

            for (int j = 1; j <= abs(k); j++)
            {
                sum += abs(code[(i - j + size) % size]);
            }

            result.push_back(sum);
        }
    }

    return result;
}

int main()
{
    vector<int> vec = {2, 4, 9, 3};
    int k = -2;

    vector<int> result = decrypt(vec, k);

    for (int val : result)
    {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}