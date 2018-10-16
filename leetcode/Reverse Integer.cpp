#include <cmath>

class Solution
{
public:
    int reverse(int x)
    {
        int result = 0, tmp = x;
        long range = pow(2, 31), check = 0;

        do
        {
            check = static_cast<long>(result) * 10 + static_cast<long>(tmp) % 10;
            if(check < -range || check > range - 1) return 0;
            
            result = result * 10 + tmp % 10;

            tmp = tmp / 10;
        }
        while(tmp != 0);

        return result;
    }
};