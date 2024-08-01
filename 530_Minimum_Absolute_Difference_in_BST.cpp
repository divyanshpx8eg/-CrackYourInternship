//530. Minimum Absolute Difference in BST


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
    void solver(TreeNode* root , int& diff , int& prev){
        if(root==nullptr) return;
            
            solver(root->left , diff , prev);

            diff = min(diff , abs(prev - root->val));
            prev = root->val; 
            
            solver(root->right , diff ,prev);
        
    }
    int getMinimumDifference(TreeNode* root) {
        //positive values
        int diff = INT_MAX;
        int prev = INT_MAX;
        solver(root , diff , prev);
        return diff;
    }
};
