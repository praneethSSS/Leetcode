class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int maxLen = 0, maxfreq = 0;
        int r = 0, l = 0;

        while(r < s.size()){
            mp[s[r]]++;
            maxfreq = max(maxfreq, mp[s[r]]);

            while((r - l + 1) - maxfreq > k){
                mp[s[l]]--;
                l++;
            }

            if((r - l + 1) - maxfreq <= k){
                maxLen = max(maxLen, r - l + 1);
            }
            r++;


        }
        return maxLen;
    }
};