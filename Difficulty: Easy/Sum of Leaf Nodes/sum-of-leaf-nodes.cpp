/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    void helper(int& sum, Node* root){
        if(root==NULL)return;
        if(root->left==NULL && root->right == NULL){
            sum+=root->data;
        }
        helper(sum, root->left);
        helper(sum, root->right);
    }
    int leafSum(Node* root) {
        // code here
        int sum=0;
        helper(sum,root);
        return sum;
        
    }
};