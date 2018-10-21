class Solution
{
public:
    string toLowerCase(string str)
    {
        string result;
        int distance = 'A' - 'a';
        
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                result += str[i] - distance;
            }
            else
            {
                result += str[i];
            }
        }
        
        return result;
    }
};