class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //int n=gas.size();
        int mxind=0 ,current=0, consume = 0 ,total = 0;
        for(int i=0;i<gas.size();i++)
        {
            consume=gas[i]-cost[i];
	        current += consume;
            if(current<0)
            {
                mxind=i+1;
                current=0;
            }
	    total += consume;
        }
        return total<0?-1 :mxind;
    }
};