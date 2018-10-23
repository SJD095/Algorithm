class Solution
{
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern)
    {
        int patternLength = pattern.size();
        
        vector<string> result;
    
        for(int i = 0; i < words.size(); i++)
        {
            map<char, char> dictionary;
            map<char, int> alphabet;
            
            for(int j = 0; j < patternLength; j++)
            {
                if(dictionary.find(pattern[j]) == dictionary.end() && alphabet.find(words[i][j]) == alphabet.end())
                {
                    dictionary[pattern[j]] = words[i][j];
                    alphabet[words[i][j]] = 1;
                }
            }
            
            string tmp = pattern;
            
            for(int j = 0; j < patternLength; j++)
            {
                tmp[j] = dictionary[pattern[j]];
            }
            
            if(tmp == words[i])
            {
                result.push_back(words[i]);
            }
        }

        return result;
    }
};