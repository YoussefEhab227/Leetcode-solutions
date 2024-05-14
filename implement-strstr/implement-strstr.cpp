class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        int h = haystack.length();
        int nIndex = 0;
        for (int i = 0; i< h;i++)
        {
            if (haystack[i] == needle[nIndex])
            {
                nIndex++;
            }
            else{
                 i=i-nIndex;
                nIndex=0;
            }
            if (nIndex == n)
            {
                return i-n+1;
            }
        }
        return -1;
    }
};