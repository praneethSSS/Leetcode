class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mpp;
        int l=0,r = 0;
        int maxLen = 0, maxfreq = 0;

        while(r < s.size()){
            mpp[s[r]]++;
            maxfreq = max(maxfreq , mpp[s[r]]);
            while((r - l + 1) - maxfreq > k){
                mpp[s[l]]--;
                // maxfreq = 0;
                // for(char c = 'A'; c <= 'Z'; c++){
                //     maxfreq = max(maxfreq, mpp[c]);
                // }
                l = l+1;
            }

            if((r-l+1) - maxfreq <= k){
                maxLen = max(maxLen,r-l+1);
                r++;
            }
        }
        return maxLen;
    }
};