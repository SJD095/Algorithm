#include <cmath>

class Solution
{
public:
    double myPow(double x, int n)
    {
        double base = x;

        if(n == 0) return 1;
        if(n == 1) return x;
        
        long i = 1;
        
        while(i * 2 < abs(n))
        {
            x *= x;
            i *= 2;
        }
        
        x *= myPow(base, abs(n) - i);
        
        if(n > 0)
        {
            return x;
        }
        if(n < 0)
        {
            if(x != 0) return 1/x;
            else return 0;
        }
    }
};