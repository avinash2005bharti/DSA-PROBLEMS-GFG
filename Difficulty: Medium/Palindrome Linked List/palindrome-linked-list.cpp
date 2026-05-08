class Solution {
  public:
    int size(Node* head){
        int cnt =0;
        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    bool isPalindrome(Node *head) {
        //  code here
        stack<int>st;
        int n = size(head);
        Node* temp = head;
        while(temp){
            st.push(temp->data);
            temp = temp->next;
        }
        temp = head;
        for(int i=0;i<n;i++){
            if(st.top()==temp->data){
                st.pop();
                temp = temp->next;
            }
            else return false;
        }
        if(st.size()==0) return true;
        return false;
        
    }
};