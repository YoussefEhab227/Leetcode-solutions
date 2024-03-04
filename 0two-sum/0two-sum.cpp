class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> sol;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (sol.find(target-nums[i])==sol.end())
            {
                sol[nums[i]] = i;
            }else{
                return {sol[target-nums[i]], i};
            }
        }
        return {};
    }
};