class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        int secLast=0,last=nums[0];
        int result;
        for(int i=1;i<n;i++){
            result=max(nums[i]+secLast,last);
            secLast=last;
            last=result;
        }
        return result;
    }
};
