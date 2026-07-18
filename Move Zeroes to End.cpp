class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp(nums.size());
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp[j++]=nums[i];
            }
        }
        while(j<nums.size()){
            temp[j++]=0;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=temp[i];
        }
    }
};
