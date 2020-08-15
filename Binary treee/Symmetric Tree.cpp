/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
        {
            return true;
        }
        return ismirror(root->left, root->right);
    }

    bool ismirror(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == nullptr || root2 == nullptr)
        {
            return root1 == root2;
        }
        if (root1->val != root2->val)
        {
            return false;
        }
        return ismirror(root1->left, root2->right) && ismirror(root1->right, root2->left);
    }
};