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
    void sumhelper(int& sum, Node* root) {
        if (root == NULL) return;

        sum += root->data;
        sumhelper(sum, root->left);
        sumhelper(sum, root->right);
    }
    int sumBT(Node* root) {
        // code here
        int sum =0;
        sumhelper(sum,root);
        return sum;
        
    }
};