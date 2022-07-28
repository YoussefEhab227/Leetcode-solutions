#include<cstring>

class Solution {
public:
    int countChar[27];
    void countC(string s)
    {
        memset(countChar,0,sizeof(countChar));
        for(int i = 0; i< s.size();i++)
        {
            countChar[s[i]-'a'+1]++;
        }
    }
    int minDeletions(string s) {
        int n = s.size();
        countC(s); 
        int counter =0;
        int j=(s[0]-'a')+1, c=0;
        
        for(int j=1;j<27;j++){
        if(countChar[j]==0) continue;
        
        for(int i=1;i<27;i++)
        {
               
            if(countChar[j] == countChar[i] && i!=j)
            {
                counter++;
                countChar[j]--;
                j--;
                break;
                
            }
           
        }
        }
        return counter;
    }
};