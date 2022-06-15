class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        ListNode* current= head;
        while(current){
            ans.push_back(current->val);
            current= current->next;
        }
        int n= ans.size();
        for(int i=0;i<n;i++){
            if(ans[i]!=ans[n-i-1]){
                return false;
            }
        }
        return true;
    }
};