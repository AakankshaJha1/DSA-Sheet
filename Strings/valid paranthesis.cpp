class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int i=0;
        while(s[i]!='\0'){
            if(st.empty() and (s[i]==']' or s[i]=='}' or s[i]==')')){
                return false;
            }
            if((s[i]==')' and st.top()=='(') or 
               (s[i]=='}' and st.top()=='{') or 
               (s[i]==']' and st.top()=='[')){
                st.pop();
            }
            else if((s[i]=='{') or (s[i]=='[') or (s[i]=='(')) {
                st.push(s[i]);
            }
            else
                return false;
            ++i;
        }
        return st.empty();
    }    
};