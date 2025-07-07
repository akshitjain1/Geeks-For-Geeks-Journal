/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    void helper(int& count, Node* root){
        if(root==NULL)return;
        if(root->left==NULL && root->right == NULL){
            count++;
        }
        helper(count, root->left);
        helper(count, root->right);
    }
    int countLeaves(Node* root) {
        // write code here
        int count =0;
        helper(count, root);
        return count;
    }
};