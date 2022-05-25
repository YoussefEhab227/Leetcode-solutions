class Solution {
    public int removeDuplicates(int[] nums) {
        
        int j= 1, i=0 ;
        int rem=0, moveto=1, k=0;
        while (i<nums.length && j<nums.length)
        {
            if(nums[i] == nums[j])
            {
                j++;
                rem++;
                
            }
            else{
                i = j;
                j++;
                nums[moveto]=nums[i];
                moveto++;
            }
            
        }
        k = nums.length-rem;
        return k;
    }
}

