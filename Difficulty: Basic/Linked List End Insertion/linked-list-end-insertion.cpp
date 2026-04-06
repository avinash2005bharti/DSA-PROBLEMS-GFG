class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        
        Node *t = new Node(x);
        
        // Case 1: empty list
        if(head == NULL){
            return t;
        }
        
        Node *temp = head;
        
        // go to last node
        while(temp->next){
            temp = temp->next;
        }
        
        temp->next = t;
        
        return head;
    }
};