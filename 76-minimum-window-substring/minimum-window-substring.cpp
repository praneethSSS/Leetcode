class Solution {
public:
    string minWindow(string s, string t) {
        int total = t.size();

        unordered_map<char,int> mp;

        for(int i=0;i<t.size();i++) mp[t[i]]++;
        int start = 0,end = 0, ans = INT_MAX, index = -1;

        while(end < s.size()){
            mp[s[end]]--;
            if(mp[s[end]] >= 0){
                total--;
            }

            while(!total && start <= end){
               if(ans > end-start+1){
                ans = end - start + 1;
                index = start;
               }
                mp[s[start]]++;

                if(mp[s[start]] > 0) total++;

                start++;
                

            }

            

            end++;
        }

        if(index == -1) return "";
        string str = "";

        for(int i=index;i<index+ans;i++){
            str += s[i];
        }
        return str;

    }
};