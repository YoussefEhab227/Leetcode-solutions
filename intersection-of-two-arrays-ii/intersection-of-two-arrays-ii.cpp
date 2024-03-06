class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map <int,int> sol; 
        vector<int>ans;
        for (int i = 0; i<nums1.size(); i++)
        {
            sol[nums1[i]] +=1;
        }
         for (int i = 0; i<nums2.size(); i++)
        {
            if(sol[nums2[i]] >0)
            {
                sol[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }return ans;
    }
};