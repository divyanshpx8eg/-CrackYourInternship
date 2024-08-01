//Count BST nodes that lie in a given range


class Solution{
public:
    void helper(Node* root , int& l , int& h, int& c){
        if(root==nullptr) return;
        if(root->data >=l && root->data <=h){
            c+=1;
        }
        helper(root->left , l , h ,c);
        helper(root->right , l , h , c);
    }
    int getCount(Node *root, int l, int h)
    {
      int count=0;
      helper(root , l , h ,count);
      return count;
    }
};
