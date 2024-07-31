//226. Invert Binary Tree

#include <bits/stdc++.h>
using namespace std;

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
    TreeNode* invertTree(TreeNode* root) {
        //base condition
        if(root==nullptr) return root;

        //Recursion
        TreeNode* leftToRight =  invertTree( root->left);
        TreeNode* rightToLeft = invertTree(root->right);

        root->right = leftToRight;
        root->left = rightToLeft;

        return root;
    }
};
