class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int k =0, sol=0;
        int[] twosum = new int[2];
        for (int i = 0 ; i<nums.length;i++)
        {
            for (int j=i+1; j<nums.length;j++)
            {
                if(nums[i] + nums[j] == target)
                {twosum[k]= i ; twosum[++k]=j; sol++; break;}
            }
            if(sol>0) break;
        }
     return twosum ;
    }
}