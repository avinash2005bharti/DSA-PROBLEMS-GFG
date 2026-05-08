class Solution {
  public:
    void removeLoop(Node* head) {

        if(head == NULL || head->next == NULL)
            return;

        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect loop
        bool cycle = false;

        while(fast && fast->next) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                cycle = true;
                break;
            }
        }

        // No loop present
        if(!cycle)
            return;

        // Step 2: Move slow to head
        slow = head;

        // Special case:
        // loop starts from head
        if(slow == fast) {

            while(fast->next != slow) {
                fast = fast->next;
            }

            fast->next = NULL;
            return;
        }

        // Step 3: Find node before starting node
        while(slow->next != fast->next) {

            slow = slow->next;
            fast = fast->next;
        }

        // Step 4: Remove loop
        fast->next = NULL;
    }
};