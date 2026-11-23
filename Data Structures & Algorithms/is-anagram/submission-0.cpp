class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]= {0};
        if(s.size() !=t.size())return false;
        int size = s.size();

        for(int i =0;i<size;i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]!= 0)
            return false;
        }
        return true;
    }
};
