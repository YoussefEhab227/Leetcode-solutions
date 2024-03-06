class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> sol; int s;
        for (int i = 0; i<nums.size(); i++)
        {
            sol[nums[i]] +=1;
        }
         for (int i = 0; i<nums.size(); i++)
        {
            if(sol[nums[i]]==1) {s= nums[i]; break;}
        }
        return s;
    }
};