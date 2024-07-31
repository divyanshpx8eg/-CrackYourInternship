//101. Symmetric Tree

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
    bool mirror(TreeNode* A , TreeNode* B){
        if(A==nullptr && B==nullptr) return true;
        if(A==nullptr || B==nullptr || A->val != B->val){
            return false;
        }
        return mirror(A->left , B->right) && mirror(A->right , B->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return mirror(root->left , root->right);
    }
};
