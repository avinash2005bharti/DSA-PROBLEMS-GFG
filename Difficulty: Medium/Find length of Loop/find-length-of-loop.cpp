class Solution {
  public:

    int lengthOfLoop(Node *head) {

        Node* slow = head;
        Node* fast = head;

        while(fast && fast->next) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {

                int loop = 1;
                fast = fast->next;

                while(slow != fast) {
                    loop++;
                    fast = fast->next;
                }

                return loop;
            }
        }

        return 0;
    }
};