class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num=0;
        while(head != NULL){
            num= num*2 + head->val;
            head = head->next;
        }
        return num;
    }
};