// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/
class Solution {
  public:
    Node* partition(Node* head, int x) {
        if (!head) return head;

        // Dummy heads for three lists
        Node* smaller = new Node(0);
        Node* equal = new Node(0);
        Node* greater = new Node(0);

        // Tails (moving pointers)
        Node* smallTail = smaller;
        Node* equalTail = equal;
        Node* greatTail = greater;

        // Traverse and classify nodes
        while (head != NULL) {
            if (head->data < x) {
                smallTail->next = head;
                smallTail = smallTail->next;
            } 
            else if (head->data == x) {
                equalTail->next = head;
                equalTail = equalTail->next;
            } 
            else { // head->data > x
                greatTail->next = head;
                greatTail = greatTail->next;
            }
            head = head->next;
        }

        // Terminate the last list
        greatTail->next = NULL;

        // Connect smaller → equal → greater lists
        // Handle missing partitions safely
        if (equal->next == NULL) {
            smallTail->next = greater->next;
        } else {
            smallTail->next = equal->next;
            equalTail->next = greater->next;
        }

        // Final head
        Node* newHead = smaller->next;

        // Clean up dummy nodes
        delete smaller;
        delete equal;
        delete greater;

        return newHead;
    }
};
