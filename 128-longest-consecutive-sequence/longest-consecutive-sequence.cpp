class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for(int num : nums){
            st.insert(num);
        }
        int maxi = 0;
        // for(int num : st){
        //     if(!st.count(num-1)){
        //         int current = num;
        //         int len = 1;
        //         while(st.count(current+1)){
        //             current++;
        //             len++;
        //         }
        //         maxi = max(maxi,len);
        //     }
        // }
        for(int num : st){

            if(!st.count(num+1)){
                int len = 1;
                int current = num;
                while(st.count(current-1)){
                    current--;
                    len++;
                }
                maxi = max(maxi,len);
            }
        }

        return maxi;
    }
};