#include <string>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0;

        int i = 0;

        while(i != s.size())
        {
            if(s[i] == 'M')
            {
                i += 1;
                result += 1000;

                break;
            }
            else if(s[i] == 'D')
            {
                i += 1;
                result += 500;

                break;
            }
            else if(s[i] == 'C')
            {
                if(s[i+1] == 'D')
                {
                    i += 2;
                    result += 400;
                    break;
                }
                else if(s[i+1] == 'M')
                {
                    i += 2;
                    result += 900;
                    break;
                }
                else
                {
                    i += 1;
                    result += 100;

                    break;
                }

                break;
            }
            else if(s[i] == 'L')
            {
                i += 1;
                result += 50;

                break;
            }
            else if(s[i] == 'X')
            {
                if(s[i+1] == 'L')
                {
                    i += 2;
                    result += 40;
                    break;
                }
                else if(s[i+1] == 'C')
                {
                    i += 2;
                    result += 90;
                    break;
                }
                else
                {
                    i += 1;
                    result += 10;

                    break;
                }

                break;
            }
            else if(s[i] == 'V')
            {
                i += 1;
                result += 5;

                break;
            }
            else if(s[i] == 'I')
            {
                if(s[i+1] == 'V')
                {
                    i += 2;
                    result += 4;
                    break;
                }
                else if(s[i+1] == 'X')
                {
                    i += 2;
                    result += 9;
                    break;
                }
                else
                {
                    i += 1;
                    result += 1;
                    break;
                }
            }
        }

        return result;
    }
};