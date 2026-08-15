class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(mp.contains(nums[i])){
                if(i - mp[nums[i]] <= k){
                    return true;

            }
           
        }
         mp[nums[i]] = i;
    }
    return false;
    }
};