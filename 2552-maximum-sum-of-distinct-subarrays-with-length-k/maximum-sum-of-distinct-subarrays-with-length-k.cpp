class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int i = 0;
        int j = k;
        long long sum = 0;
        long long maxSum = 0;

        for(int t=0;t<k;t++){ 
            mpp[nums[t]]++;
            sum += nums[t];
            if(mpp.size() == k){
                maxSum = max(sum,maxSum);
            }
        }

        while( j < n ){
            mpp[nums[i]]--;
            if(mpp[nums[i]] == 0) mpp.erase(nums[i]);
            mpp[nums[j]]++;
            
            sum = sum + nums[j] - nums[i];
            if(mpp.size() == k){
                maxSum = max(maxSum,sum);
            }
            j++;
            i++;
        }
    return maxSum;
        
    }
};