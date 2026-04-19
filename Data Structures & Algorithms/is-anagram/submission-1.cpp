class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        return false;

        // unordered_map<char,int>mp;
        // for(char ch:s)
        // mp[ch]++;

        // for(char ch:t)
        // {
        //     mp[ch]--;
        //     if(mp[ch]<0)
        //     return false;
        // }
        // return true;

        int freq[26] = {0};
        for(int i = 0;i<26;i++)
        {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(int i = 0;i<26;i++)
        {
            if(freq[i]!=0)
            return false;
        }
        return true;
    }
};
