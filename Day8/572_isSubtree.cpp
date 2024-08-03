/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isIdentical(TreeNode* a,TreeNode* b)
    {
        if(!a && !b)    return true;
        if(!a || !b)   return false;
        if(a->val != b->val)    return false;

         
        if(isIdentical(a->left,b->left) && isIdentical(a->right,b->right))  
            return 1;
        return 0;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)   return false;
        if(!subRoot)   return true;

        if(isIdentical(root,subRoot))   return true;

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};