class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left = 0;
        int right = 0;
        int maxwindow = 0;
        int maxfreq = 0;

        while(right<s.length())
        {
           freq[s[right]-'A']++;
           maxfreq = max(maxfreq,freq[s[right]-'A']);

           int windowlength = right-left+1;
           if(windowlength-maxfreq>k)
           {
            freq[s[left]-'A']--;
            left++;
           }
           windowlength = right-left+1;
           maxwindow = max(maxwindow,windowlength);
           right++;           
        }
        return maxwindow;
    }
};
