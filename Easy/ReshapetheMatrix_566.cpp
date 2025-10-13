#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    int m = mat.size();
    int n = mat[0].size();

    // Check if reshape is possible
    if (m * n != r * c)
    {
        return mat; // Return original if dimensions don’t match
    }

    vector<vector<int>> reshaped(r, vector<int>(c));
    int row = 0, col = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            reshaped[row][col] = mat[i][j];
            col++;

            // Move to next row in reshaped matrix if needed
            if (col == c)
            {
                col = 0;
                row++;
            }
        }
    }

    return reshaped;
}

int main()
{
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    vector<vector<int>> result = matrixReshape(mat, 1, 4);

    for (int r = 0; r < result.size(); r++)
    {
        for (int c = 0; c < result[r].size(); c++)
        {
            cout << result[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}