class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans="";
       int strsSize=strs.size();
       if(strsSize==0) return "";
       if(strsSize==1) return strs[0];
       int i=0;
       bool flag=true;
       while(true){
           char ch=strs[0][i];
           for(int j=1;j<strsSize;j++)
           {
               if(strs[j][i]!=ch || strs[j][i]=='\0')
               {
                   flag=false;
                   break;
               }  
           }
           if(!flag) break;
           ans+=ch;
           i++;
       }
    return ans;
    }
};