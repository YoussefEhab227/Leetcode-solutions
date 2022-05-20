class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //int n=gas.size();
        int maxin=0;
        int curr=0;
	    int consume = 0;
	    int total = 0;
        
        for(int i=0;i<gas.size();i++)
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