class Solution
{
public:
    int minAddToMakeValid(string S)
    {
        int leftBalance = 0, rightBalance = 0;
        
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == '(')
            {
                ++leftBalance;
            }
            else
            {
                if(leftBalance - 1 >= 0)
                {
                    --leftBalance;
                }
                else
                {
                    ++rightBalance;
                }
            }
        }
        
        return leftBalance + rightBalance;
    }
};