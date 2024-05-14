class Solution {
public:
    int myAtoi(string s) {
        
        const int len = s.size();
        
        if(len == 0){
            return 0;
        }
        int index = 0; char ch;
        while (s[index] == ' ') ++index;
        
        if (index == len) return 0;
        
        //Getting the sign
        bool isNegative = false;
        if (s[index] == '-') isNegative =true;
        if (isNegative || s[index] == '+') ++index;
        
        //Converting the numbers, Rounding the Max/MIN numbers
        const int maxLimit = INT_MAX/10;
        int result =0;
        while (index < len && isDigit(ch=s[index]))
        {
            int digit = ch - '0';
            if(result > maxLimit ||  (result == maxLimit && digit > 7) ) return isNegative? INT_MIN : INT_MAX;
            
            result = (10*result) + digit;
            ++index;
        }
        
        return isNegative? -result : result;
    }
    
    private:
    bool isDigit(char ch){
        return ch >= '0' && ch <= '9';
    }
};