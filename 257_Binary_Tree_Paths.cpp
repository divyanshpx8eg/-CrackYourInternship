//257. Binary Tree Paths


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
    void solver(TreeNode* root , vector<string>& result , string ans ){
        if(root==nullptr) return;

        string value=to_string(root->val);
        int n = value.size() + 2;
        if (!ans.empty()) ans += "->";
        ans =ans + value;

        if(root->left ==nullptr && root->right==nullptr){

            result.push_back(ans);
        }
        
        //left 
        solver(root->left  , result , ans);
        //right
        solver(root->right , result , ans);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result; 
        string ans; 
        solver(root , result , ans);
        return result;
    }
};
