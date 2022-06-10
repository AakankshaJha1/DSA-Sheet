class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum= n*(n+1)/2, tsum=0;
        for(int x : nums)
            tsum += x;
        return sum-tsum;
    }
};