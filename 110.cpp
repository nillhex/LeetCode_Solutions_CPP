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
    bool res=true;
    bool isBalanced(TreeNode *root) {
        if(root==NULL) return true;
        minDepth(root);
        return res;
    }
    int minDepth(TreeNode *root) {
        if(root == NULL) return 0;
        else 
            return calMinDepth(root);
    }
    int calMinDepth(TreeNode *root) {
        if(root==NULL) return 1;
        if(root->left==NULL && root->right==NULL) return 1;
            int left=minDepth(root->left)+1;
            int right=minDepth(root->right)+1;
            if(left-right>1||left-right<-1) res = false;
            if(left<right) return right;
            else return left;
    }
};