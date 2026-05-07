class Solution {
  public:
  
    int modularNode(Node *head, int k) {
        
        if(head == NULL || k <= 0)
            return -1;

        Node* temp = head;
        Node* ans = NULL;

        int pos = 1;

        while(temp != NULL) {
            
            if(pos % k == 0) {
                ans = temp;
            }

            temp = temp->next;
            pos++;
        }

        // If no modular node exists
        if(ans == NULL)
            return -1;

        return ans->data;
    }
};