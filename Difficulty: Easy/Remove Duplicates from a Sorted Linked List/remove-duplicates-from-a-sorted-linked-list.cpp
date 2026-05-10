class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        
        if(head == NULL) return head;
        
        Node* temp = head;
        Node* t = head->next;
        
        while(temp && t){
            
            if(temp->data == t->data){
                t = t->next;
            }
            else{
                temp->next = t;
                temp = t;
                t = t->next;
            }
        }
        
        temp->next = t;
        
        return head;
    }
};