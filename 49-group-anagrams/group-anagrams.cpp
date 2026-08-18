class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        

        for(string str : strs){

            vector<int> freq(26,0);

            for(char c : str){
                freq[c - 'a']++;
            }
            string hash;
            for(int i=0;i<26;i++){
                hash += to_string(freq[i]) + "#";
            }

            mp[hash].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto pair : mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};