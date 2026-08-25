class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maxWater = 0;
        while(i < j){
            if(height[i] < height[j]){
                int curr = (j-i)*(height[i]);
                maxWater = max(maxWater,curr); 
                i++;      
            }else{
                int curr = (j-i)*(height[j]);
                maxWater = max(maxWater,curr);
                j--;
            }
        }
        return maxWater;
    }
};