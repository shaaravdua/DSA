/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    int minDepth(Node *root) {
        // code here
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL){
            return 1+minDepth(root->right);
        }
        if(root->right==NULL){
            return 1+minDepth(root->left);
        }
        
        int lh=minDepth(root->left);
        int rh=minDepth(root->right);
        
        return 1+min(lh,rh);
    }
};