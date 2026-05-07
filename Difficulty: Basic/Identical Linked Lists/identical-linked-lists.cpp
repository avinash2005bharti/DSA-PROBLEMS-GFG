
class Solution {
  public:
    bool size (Node *head1, Node *head2){
        int s1=0;int s2=0;
        Node *temp1= head1;
        Node *temp2 = head2;
        while(temp1){ s1++;temp1=temp1->next;}
        while(temp2){ s2++;temp2=temp2->next;}
        return s1==s2;
        
    }
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        if(!size(head1,head2)) return false;
        Node *temp1= head1;
        Node *temp2 = head2;
        while(temp1 && temp2){
            if(temp1->data != temp2->data) return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};