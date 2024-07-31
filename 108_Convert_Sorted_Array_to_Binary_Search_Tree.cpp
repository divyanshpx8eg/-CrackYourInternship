//108. Convert Sorted Array to Binary Search Tree

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
    void helper(vector<int>& nums  , int s, int e , int m , TreeNode* root){
        root->val = nums[m];
        

        if(s<=m-1){

            TreeNode* Temp=new TreeNode();
            root->left = Temp;
            helper(nums , s , m-1 ,s+ (m-1-s)/2 , Temp);
        }
        if(m+1<=e){
            TreeNode* Temp=new TreeNode();
            root->right = Temp;
            helper(nums , m+1 , e ,m+1+ (e-m-1)/2 , Temp);
        }

    }
    TreeNode* sortedArrayToBST(vector<int>& nums ) {
        int s=0;
        int e= nums.size()-1;
        int m = s + (e - s) / 2;
        TreeNode* root = new TreeNode();

        helper(nums , s , e , m , root);
        return root;


    }
};
