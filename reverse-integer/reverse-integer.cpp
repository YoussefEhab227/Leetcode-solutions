class Solution {
public:
    int reverse(int x) {
        long r =0;
        while (x)
        {
            if (r>INT_MAX/10 || r<INT_MIN/10) return 0;
            r=r*10 + x%10;
            x/=10;
            
        }
        return int(r);
    }
};