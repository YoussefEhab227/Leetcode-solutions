class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map <int,int> sol;
        for (int i = 0; i<nums.size(); i++)
        {
            sol[nums[i]] +=1;
        }
         for (int i = 0; i<nums.size(); i++)
        {
            if(sol[nums[i]] >1) return true;
        }return false;
        
    }
};