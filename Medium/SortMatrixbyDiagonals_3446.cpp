#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> sortElements(vector<vector<int>> subArray)
{
    sort(subArray.begin(), subArray.end());
    return subArray;
}

vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();

    vector<vector<int>> vec(n, vector<int>(n, 0));

    cout << "Primary Diagonal: ";
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n - 1)
        {
            cout << grid[i][j + 1] << " ";
            j++;
        }
        // cout << i << i << " ";
    }

    cout << "\nPrinting co-or:" << "\n";

    return vec;
}

int main()
{
    vector<vector<int>> vec = {{1, 7, 3}, {9, 8, 2}, {4, 5, 6}};

    vector<vector<int>> result = sortMatrix(vec);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}