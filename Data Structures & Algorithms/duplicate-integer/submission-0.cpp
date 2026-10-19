class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int x : nums) s.insert(x);

        return nums.size() != s.size();
    }
};