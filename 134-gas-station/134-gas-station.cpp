class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int n=gas.size();
        int sum1 = 0;
        accumulate(gas.begin(),gas.end(),sum1);
        int sum2=0;
        accumulate(cost.begin(),cost.end(),sum2);
        if(sum1<sum2)return -1;
        int maxin=0;
        int curr=0;
	int consume = 0;
	int total = 0;
        
        for(int i=0;i<n;i++)
        {
            consume=gas[i]-cost[i];
	        curr += consume;
            if(curr<0)
            {
                maxin=i+1;
                curr=0;
            }
	    total += consume;
        }
        return total<0?-1 :maxin;
    }
};