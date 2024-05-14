class Solution {
public:
    int myAtoi(string s) {
        
        const int len = s.size();
        
        if(len == 0){
            return 0;
        }
        
        //Removing whitespaces
        int index = 0;
        while(index < len && s[index] == ' '){
            ++index;
        }
        //if no number after whitespaces return 0
        if(index == len){
            return 0;
        }
        
        char ch;
        bool isNegative = (ch = s[index]) == '-';
        
        if(isNegative || ch == '+'){
            ++index;
        }
		
       const int maxLimit = INT_MAX/10;
        int result = 0;
       while (index < len && isDigit ( ch = s[index])) 
       {
           int digit = ch - '0';
           if(result > maxLimit || (result == maxLimit && digit > 7)){
                return isNegative ? INT_MIN : INT_MAX;
            }
           result = digit + (result * 10);
           ++index;
       }
        
        return isNegative ? -result : result;
    }
    
    private:
    bool isDigit(char ch){
        return ch >= '0' && ch <= '9';
    }
};