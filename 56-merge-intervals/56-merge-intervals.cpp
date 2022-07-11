class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),[&](vector<int> &a,vector<int> &b){
            return a[0] < b[0];
        });
        
        int index=0;
        for(int i=1; i< intervals.size(); i++){
            if(intervals[index][1] >= intervals[i][0]){
                intervals[index][1] =max(intervals[index][1],intervals[i][1]);
                intervals[index][0]=min(intervals[index][0],intervals[i][0]);   
            }
            else{
                index++;
                intervals[index]=intervals[i];
            }   
        }
        while((intervals.size()-index-1) !=0){
            intervals.pop_back();
        }
        return intervals;    
    }  
    
};