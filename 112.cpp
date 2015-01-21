/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
            return dfs(root, sum);
    }
    
    bool dfs(TreeNode *root, int sum)
    {
        if(root == NULL)
            return false;
        if(root->left == NULL && root->right == NULL)
            return (sum == root->val);
        else
        {
            if(dfs(root->left,sum-root->val))
                return true;
            if(dfs(root->right, sum-root->val))
                return true;
            else
                return false;
        }
    }
    
    
 
    
};