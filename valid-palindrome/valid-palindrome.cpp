class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.length();
        vector<char> str(n);
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                str[j++]=tolower(s[i]);
            }
        }
        for(int i=0;i<j/2;i++)
        {
            if(str[i]!=str[j-i-1])
                return false;
        }
        return true;
    }
};