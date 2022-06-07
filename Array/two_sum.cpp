class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(s.find(x)!=s.end()){
                ans.push_back(i);
                int loc= find(nums.begin(), nums.end(),x)- nums.begin();
                ans.push_back(loc);
                return ans;
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};