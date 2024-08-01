//112. Path Sum
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
    bool solver (TreeNode* root, int targetSum , int sum ){
        //Base Case
        if(root==nullptr) return false;

        sum+=root->val;


        //Leaf Node Case 
        if(root->left ==nullptr && root->right==nullptr){
            
            if(sum==targetSum){
                return true;
            }
            return false;
        }

        return solver(root->left , targetSum , sum ) || solver(root->right , targetSum , sum );

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        int sum=0;
        return solver(root , targetSum , sum );
    }
};
