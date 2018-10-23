class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A)
    {   
        vector<vector<int>> result = A;
        
        for(int i = 0; i < A.size(); i++)
        {
            for(int j = 0, width = A[i].size(); j < width; j++)
            {
                result[i][j] = A[i][width - j - 1] == 1 ? 0 : 1;
            }
        }
        
        return result;
    }
};