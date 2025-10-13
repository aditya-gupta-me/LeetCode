#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> imageSmoother(vector<vector<int>> &arr)
{
    int n = arr.size();

    // corner case
    // vector has size < 3
    if (n < 3)
    {
        return arr;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            // find the mid element
            // in a 3x3 matrix
            if (i > 0 && j > 0 && i < n - 1 && j < arr[i].size() - 1)
            {
                // found the element

                // top left
                int topLeft = arr[i - 1][j - 1];
                // top right
                int topRight = arr[i - 1][j + 1];
                // bottom left
                int bottomLeft = arr[i + 1][j - 1];
                // bottom right
                int bottomRight = arr[i + 1][j + 1];

                // middle top
                int middleTop = arr[i - 1][j];
                // middle left
                int middleLeft = arr[i][j - 1];
                // middle right
                int middleRight = arr[i][j + 1];
                // middle bottom
                int middleBottom = arr[i + 1][j];

                // middle element
                int middle = arr[i][j];
            }
        }
    }

    return arr;
}

int main()
{
    return 0;
}