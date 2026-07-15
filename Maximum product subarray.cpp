class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int leftoright=1;
        int rightoleft=1;
        int maxprod=INT_MIN;
        for(int i=0;i<n;i++){
            if(leftoright==0){
                leftoright=1;
            }
            if(rightoleft==0){
                rightoleft=1;
            }
            leftoright*=nums[i];
            rightoleft*=nums[n-1-i];
            maxprod=max({leftoright,rightoleft,maxprod});
        }
        return maxprod;
    }
};
