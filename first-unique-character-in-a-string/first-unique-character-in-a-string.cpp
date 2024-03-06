class Solution {
public:
    int firstUniqChar(string s) {
        map <char,int> sol; 
        for (int i = 0; i<s.length(); i++)
        {
            sol[s[i]] +=1;
        }
        for (int i = 0 ; i <s.length(); i++)
        {
            if(sol[s[i]] == 1)
                return i;
        }
        return -1;
        
    }
};