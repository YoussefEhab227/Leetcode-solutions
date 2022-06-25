class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
          int res = 0 ; int count = 1;
        for(int i = 0 ;i < nums.size(); i++){
            if(nums[res]==nums[i])
                count++;
            else
                count--;
				
            if(count == 0) {
                res = i;
                count = 1;
            }
        }
        return nums[res];
    }
        
};