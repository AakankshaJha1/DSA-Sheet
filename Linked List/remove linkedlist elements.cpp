class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        if(head->val == val) return removeElements(head->next, val);
        ListNode* node =head;
        while(node!=NULL and node->next!=NULL){
            if(node->next->val== val){
                node->next= node->next->next;
            }
            else{
                node= node->next;
            }
        }
        return head;
    }
};