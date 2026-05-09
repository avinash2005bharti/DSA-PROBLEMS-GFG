class Solution {
  public:
  
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr){
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
  
    Node* addTwoLists(Node* head1, Node* head2) {
        
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        int carry = 0;
        
        Node* dummy = new Node(0);
        Node* temp = dummy;
        
        while(head1 || head2 || carry){
            
            int sum = carry;
            
            if(head1){
                sum += head1->data;
                head1 = head1->next;
            }
            
            if(head2){
                sum += head2->data;
                head2 = head2->next;
            }
            
            carry = sum / 10;
            
            temp->next = new Node(sum % 10);
            temp = temp->next;
        }
        
       dummy =  reverse(dummy->next);
       temp = dummy;
       while(temp->data==0){
           temp = temp->next;
           if(temp->data!=0) break;
       }
       dummy = temp;
       return dummy;
    }
};