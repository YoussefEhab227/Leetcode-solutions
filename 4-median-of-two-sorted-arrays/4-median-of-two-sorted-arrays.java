class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        double median = 0;
        int siz = m+n;
        int [] merged = new int[siz];
        for(int i = 0 ; i<m; i++) merged[i]=nums1[i];
        for(int i = 0 ; i<n; i++) merged[m+i]=nums2[i];

        Arrays.sort(merged); 
        if(siz%2 == 0)
        {
            int x = (siz)/2;
            int x1= x-1;
            double z =Double.valueOf(merged[x1]);
            double d =Double.valueOf(merged[x]);
            median = (d+z)/2;
        }
        else 
        {
          int x = ((siz)/2);
          median = merged[x];  
        }
       return median; 
    }
}