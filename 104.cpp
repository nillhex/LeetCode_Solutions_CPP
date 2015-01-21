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

    int maxDepth(TreeNode *root) {
        if(root!=NULL)
        {
            return calDepth(root);
        }
        else
        {
            return 0;
        }
    }
    
    int calDepth(TreeNode *root)
    {
        int leftDep=0;
        int rightDep=0;
        if(root->left==NULL)
        {
            leftDep=1;
        }
        else
        {
            leftDep=calDepth(root->left)+1;
        }
        if(root->right==NULL)
        {
            rightDep=1;
        }
        else
        {
            rightDep=calDepth(root->right)+1;
        }
        return leftDep>rightDep?leftDep:rightDep;
    }
};