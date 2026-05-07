class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
      Node* temp = head;
      vector<int>ans;
      while(temp){
          ans.push_back(temp->data);
          temp = temp->next;
      }
      return ans;
    }
};