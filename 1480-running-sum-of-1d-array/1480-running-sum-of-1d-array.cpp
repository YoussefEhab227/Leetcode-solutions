class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int>sums;
        for(int i=0; i< nums.size();i++)
        {
            sum+=nums[i];
            sums.push_back(sum);
            
        }
        return sums;
    }
};