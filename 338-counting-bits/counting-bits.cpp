class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=0;i<=n;i++){
            int count = 0;
            int j = i;
            while(j>0){
                if(j%2 == 1){
                    count++;
                } 
                j = j/2;
            }

            if(count>=1){
                    ans.push_back(count);
                }
        }
        return ans;
    }
};