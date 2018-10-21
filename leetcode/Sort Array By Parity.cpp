class Solution
{
public:
    vector<int> sortArrayByParity(vector<int>& A)
    {
        vector<int> result;
        
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] % 2 == 0)
            {
                result.push_back(A[i]);
            }
        }
        
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] % 2 != 0)
            {
                result.push_back(A[i]);
            }
        }
        
        return result;
    }
};