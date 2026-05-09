class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
       vector<int>ans;
       Node* temp = head;
       while(temp){
           ans.push_back(temp->data);
           temp = temp->next;
       }
       temp = head;
       int n = ans.size();
       for(int i=n-1;i>=0;i--){
           temp->data = ans[i];
           temp = temp->next;
       }
       return head;
    }
};