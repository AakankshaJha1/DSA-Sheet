class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for (auto &num : nums) {
            if (check.count(num))
                return num;
            check.insert(num);
        }
        return -1;
    }
};