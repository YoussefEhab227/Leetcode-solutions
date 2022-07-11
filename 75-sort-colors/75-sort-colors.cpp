class Solution {
public:
    void sortColors(vector<int>& nums) {
        int counter=0;
        vector<int> num;
        if(nums.size()==1) return;
        for(int i=0;i< 3;i++)
        {
          for(int j=0;j< nums.size();j++){              
              if(nums[j]== counter)
                  num.push_back(counter);
                  
        }
        counter++;    
    }
    nums = num;
    }
};