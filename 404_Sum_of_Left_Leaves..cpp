//404. Sum of Left Leaves

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
    void solver ( TreeNode* root , int& sum , bool isleft){
        if(root==nullptr ) return ;
        if(root->left ==nullptr && root->right == nullptr ){
            if(isleft) sum +=root->val;
            return;
        }
        solver(root->left , sum , 1);
        solver(root->right , sum , 0);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        solver(root , sum  , 0);
        return sum ; 
    }
};
