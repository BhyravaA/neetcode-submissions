class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n = strs.size();

            int minlen = INT_MAX;
            for(int j = 0 ; j<n; j++)
            {
                minlen = min(minlen , (int)strs[j].size());
            }

            for(int i=0 ;i<minlen ; i++)
            {
                for(int j=0;j<n ;j++)
                {
                    if(strs[0][i] != strs[j][i])
                    {
                        return ans;
                    }   
                }
                   ans += strs[0][i];

            }
        return ans;
    }
};