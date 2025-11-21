#include <iostream>
#include <vector>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

int maxDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftSubTree = maxDepth(root->left);
    int rightSubTree = maxDepth(root->right);

    return max(leftSubTree, rightSubTree) + 1;
}

int main()
{
    

    return 0;
}