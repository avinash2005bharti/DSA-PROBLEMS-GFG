class Solution {
  public:
  
    int size(Node* head){
        int cnt = 0;
        
        while(head){
            cnt++;
            head = head->next;
        }
        
        return cnt;
    }

    Node* rotate(Node* head, int k) {
        
        if(head == NULL || head->next == NULL) return head;
        
        int n = size(head);
        
        k = k % n;
        
        if(k == 0) return head;

        Node* tail = head;
        
        while(tail->next){
            tail = tail->next;
        }

        // Make circular
        tail->next = head;

        Node* curr = head;

        // Move to kth node
        for(int i = 1; i < k; i++){
            curr = curr->next;
        }

        // New head
        head = curr->next;

        // Break the circle
        curr->next = NULL;

        return head;
    }
};