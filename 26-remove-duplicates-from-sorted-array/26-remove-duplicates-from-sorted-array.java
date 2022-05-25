class Solution {
    public int removeDuplicates(int[] nums) {
        
        int j= 1, i=0 , n = nums.length;
        int rem=0, moveto=1, k=0;
        while (i<n && j<n)
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
        k = n-rem;
        return k;
    }
}

