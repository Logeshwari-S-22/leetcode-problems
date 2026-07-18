class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=nums[0];
        int maxEnd=nums[0],maxSum=nums[0];
        int minEnd=nums[0],minSum=nums[0];
        for(int i=1;i<nums.size();i++){
            totalsum+=nums[i];
            maxEnd=max(nums[i],maxEnd+nums[i]);
            maxSum=max(maxSum,maxEnd);
            minEnd=min(nums[i],minEnd+nums[i]);
            minSum=min(minSum,minEnd);
        }
        if(maxSum<0){
            return maxSum;
        }
        return max(maxSum,totalsum-minSum);
    }
};
