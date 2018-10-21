#inlcude <set>

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        vector<string> alphabet = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        vector<string> translation;
        set<string> s;
        string tmp;
        
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = 0; j < words[i].size(); j++)
            {
                tmp +=alphabet[words[i][j] - 'a'];
            }
            s.insert(tmp);
            tmp = "";
        }
        
        return s.size();
    }
};