class Solution {
public:
    vector<int> sumZero(int n){
        if(n<=1) return {0};
        int s=n/2;
        vector<int> ans;
        
        if(n%2==1)
        {
            
            for(int i=0;i<n;i++)
            {
                ans.push_back(i-s);
            }
        }
        else 
        {
            for(int j=0;j<=n;j++)
            {   if((j-s)!=0)
                ans.push_back((j-s));
            }
        }
     return ans;
    
    }
};