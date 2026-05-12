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
    Node* segregate(Node* head) {
        // code here
        int n = size(head);
        vector<int>ans(n,0);
        Node* temp = head;
        for(int i=0;i<n;i++){
             ans[i]= temp->data;
             temp = temp->next;
        }
        temp = head;
        sort(ans.begin(),ans.end());
       for(int i=0;i<n;i++){
           temp->data = ans[i];
           temp = temp->next;
       }
        return head;
    }
};