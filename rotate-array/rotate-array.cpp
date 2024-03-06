class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size(); // if k is greater than nums.size() we will iterate only on the mod
        
        reverse(nums.begin(),nums.begin()+(nums.size()-k)); 
        // reverse the first part of the array, in the example [1,2,3,4,5,6,7] will be [4,3,2,1,5,6,7]

        reverse(nums.begin()+(nums.size()-k),nums.end()); 
        // Reverse the last part of the array (from k to end), so it will be [4,3,2,1,7,6,5]
    
        reverse(nums.begin(),nums.end()); // reverse the whole array, so it will be [5,6,7,1,2,3,4]
    }
};