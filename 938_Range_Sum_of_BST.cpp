//938. Range Sum of BST

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
    
    int rangeSumBST(TreeNode* root, int& low, int& high , int sum=0) {
        if(root==NULL) return 0 ;
        sum = rangeSumBST(root->left , low ,high , sum)+ rangeSumBST(root->right , low ,high , sum);
        if(root->val >= low && root->val<=high){
            sum+=root->val;
        }
        return sum;
    }
};
