class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid)
    {
        int length = grid[0].size(), result = 0;
        vector<int> fromTop, fromLeft;
        
        for(int i = 0; i < length; i++)
        {
            int tmpLeftHeight = 0, tmpTopHeight = 0;
            
            for(int j = 0; j < length; j++)
            {
                if(grid[i][j] > tmpLeftHeight)
                {
                    tmpLeftHeight = grid[i][j];
                }
                if(grid[j][i] > tmpTopHeight)
                {
                    tmpTopHeight = grid[j][i];
                }
            }
            
            fromLeft.push_back(tmpLeftHeight);
            fromTop.push_back(tmpTopHeight);
        }
        
        for(int i = 0; i < length; i++)
        {
            for(int j = 0; j < length; j++)
            {
                int min = fromLeft[i] > fromTop[j] ? fromTop[j] : fromLeft[i];
                
                result += min - grid[i][j];
            }
        }
        
        return result;
    }
};