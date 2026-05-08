/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    int size(Node* head){
        int cnt =0;
        while(head){
            head= head->next;
            cnt++;
        }
        return cnt;
    }
    int getKthFromLast(Node* head, int k) {
        // code here
        int n = size(head);
        Node* temp = head;
        if(k>n || k<0) return -1;
        for(int i=0;i<n-k;i++){
            temp = temp->next;
        }
        return temp->data;
    }
};