/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isSymmetric(Node* root) {
        // code here
        return isMirror(root->left,root->right);
        
    }
  private:
    bool isMirror(Node* n1,Node* n2){
        if(n1==nullptr && n2==nullptr){
            return true;
        }
        if(n1==nullptr || n2==nullptr){
            return false;
        }
        return n1->data==n2->data && isMirror(n1->left,n2->right) && isMirror(n1->right,n2->left);
    }
};