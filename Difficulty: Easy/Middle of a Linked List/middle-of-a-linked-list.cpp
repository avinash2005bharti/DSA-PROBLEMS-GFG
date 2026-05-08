class Solution {
  public:

    int size(Node* head) {

        int cnt = 0;

        while(head) {
            cnt++;
            head = head->next;
        }

        return cnt;
    }

    int getMiddle(Node* head) {

        int n = size(head);

        Node* temp = head;

        // Move to middle node
        for(int i = 0; i < n/2; i++) {
            temp = temp->next;
        }

        return temp->data;
    }
};