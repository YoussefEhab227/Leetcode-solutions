class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> tS;
        vector<int> f;
        int start,curr_sum,target,end;
        int n = nums.size();
        
        if(n<3) return tS;
       
        sort(nums.begin(),nums.end());
        
        if((nums[0]==0)&&(nums[n-1]==0))
        {
            f.push_back(nums[0]);
            f.push_back(nums[0]);
            f.push_back(nums[0]);
            tS.push_back(f);  
           // f.clear();
            return tS;
        }
        
        int i;
        for( i=0;i<n&&nums[i]<=0;i++)
        {
            if(i+1==n) break;
            start=i+1;
            end=n-1;
            target=-nums[i];
            while(start!=end)
            {
                curr_sum=nums[start]+nums[end];
                if(curr_sum<target)
                {
                    start++;
                }
                 else if(curr_sum==target)
                {
                    f.push_back(nums[i]);
                    f.push_back(nums[start]);
                    f.push_back(nums[end]);
                    tS.push_back(f);
                    start++;
                    f.clear();
                      }
                else
                {
                    end--;
                }
                
            }
            while(i<n&&nums[i+1]==nums[i])
            {
                i++;
            }
        }
       tS.erase(unique(tS.begin(), tS.end()), tS.end());    
        return tS;
    }
};