class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum = 0;

       for(int i=0;i<k;i++){
            sum += nums[i];
       }

       int i = 1;
       int j = k;
       double maxSum = sum;
       while(j < nums.size()){
        sum -= nums[i-1];
        sum += nums[j];
        maxSum = max(maxSum,sum);
        j++;
        i++;
       }

       return maxSum/k;
    }
};