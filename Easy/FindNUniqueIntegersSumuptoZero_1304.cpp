#include <iostream>
#include <vector>

using namespace std;

vector<int> sumZero(int n)
{
    vector<int> result;
    for (int i = 1; i <= n / 2; ++i)
    {
        result.push_back(-i);
        result.push_back(i);
    }
    if (n % 2 != 0)
    {
        result.push_back(0); // Include 0 only if n is odd
    }
    return result;
}

int main()
{
    int n = 5;
    vector<int> result = sumZero(n);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}