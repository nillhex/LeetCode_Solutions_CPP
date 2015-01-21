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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        parse(root,res);
        return res;
    }
    void parse(TreeNode *root,vector<int>& res)
    {
        if(root!=NULL)
        {
            res.push_back(root->val);
            parse(root->left,res);
            parse(root->right,res);
        }
        
    }
};