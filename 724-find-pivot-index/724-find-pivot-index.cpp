class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    
    int left_sum= 0, right_sum=0;
    
    for(int i = 0; i<nums.size(); i++)
        right_sum+=nums[i];

     right_sum -= nums[0];
    
    if(right_sum == 0) return 0;
        
    for(int i = 1; i<nums.size(); i++)
        {
            right_sum-= nums[i];
            left_sum += nums[i-1];
            if(right_sum==left_sum) return i;
        }
        return -1;
    }
};


        