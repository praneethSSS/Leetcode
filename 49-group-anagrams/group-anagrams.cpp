class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;

        for(string s : strs) {

            vector<int> freq(26, 0);

            // Count characters
            for(char c : s) {
                freq[c - 'a']++;
            }

            // Create frequency signature
            string key;

            for(int i = 0; i < 26; i++) {
                key += to_string(freq[i]) + "#";
            }

            // Group using the signature
            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto pair : mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};