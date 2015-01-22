/*
*
*    author:    nillhex
*    website:    nillhex.com
*    E-mail:    nillhex[AT]gmail.com
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
    int minDepth(TreeNode *root) {
        if(root == NULL) return 0;
        else 
            return calMinDepth(root);
    }
    int calMinDepth(TreeNode *root) {
        if(root==NULL) return 1;
        if(root->left==NULL && root->right==NULL) return 1;
        else if(root->left != NULL && root->right != NULL)
        {
            int left=minDepth(root->left)+1;
            int right=minDepth(root->right)+1;
            if(left>right) return right;
            else return left;
        }
        //注意，要遍历到**叶子**节点
        else if(root->left == NULL && root->right != NULL)
        {
            return minDepth(root->right)+1;
        }
        else
        {
            return minDepth(root->left)+1;
        }
        
    }
   
};