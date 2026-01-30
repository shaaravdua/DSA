/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* lca(Node* root, int n1, int n2) {
        //  code here
        if(root->data==n1 || root->data==n2){
            return root;
        }
        Node* a=NULL;
        Node* b=NULL;
        if(root==NULL){
            return NULL;
        }
        if(root->left!=NULL){
            a=lca(root->left,n1,n2);
        }
        if(root->right!=NULL){
            b=lca(root->right,n1,n2);
        }
        if(a==NULL && b==NULL){
            return NULL;
        }
        if(a!=NULL && b==NULL){
            return a;
        }
        if(a==NULL && b!=NULL){
            return b;
        }
        if(a!=NULL && b!=NULL){
            return root;
        }
        return root;
    }
};