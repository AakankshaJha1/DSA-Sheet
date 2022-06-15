class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp= head;
        ListNode* newhead= head;
        while(head and head->next){
            temp = temp->next;
            head->next= temp->next; //yahan se naya swap hoga
            temp->next=newhead;
            newhead=temp;
            temp=head;
        }
        return newhead;
    }
};