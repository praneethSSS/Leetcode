class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sa(26,0);
        vector<int> ta(26,0);

        if(s.size() != t.size()) return false;

        for(int i=0;i<s.size();i++){
            sa[s[i] - 'a']++;
            ta[t[i] - 'a']++;
        }

        return sa == ta;
    }
};