class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mpp;

        int total = p.size();

        for(int i=0;i<p.size();i++){
            mpp[p[i]]++;
        }

        int l = 0,r = 0;
        vector<int> ans;

        while(r < s.size()){

           mpp[s[r]]--;
           
           if(mpp[s[r]] >= 0){
            total--;
           }

           if(r - l + 1 == p.size()){
            if(total == 0){
                ans.push_back(l);
            }
            mpp[s[l]]++;

            if(mpp[s[l]] > 0){
                total++;
            }

            l++;
           }

           r++;
        }
        return ans;
    }
};