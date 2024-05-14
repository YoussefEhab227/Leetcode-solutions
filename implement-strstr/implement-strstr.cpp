class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length(), n = needle.length() , i = 0;
        
        while (i< h)
        {
            
            string s= haystack.substr(i, n);
            
            if (s == needle){
                return i;
            }
            i++;
        }
        return -1;
    }
};