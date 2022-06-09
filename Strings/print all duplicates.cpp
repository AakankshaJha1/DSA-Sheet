class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        unordered_set <int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
                s.insert(nums[i]);
            }
            else{
                duplicates.push_back(nums[i]);
            }
        }
        return duplicates;
    }
};