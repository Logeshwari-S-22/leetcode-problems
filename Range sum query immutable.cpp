class NumArray {
public:
    vector<int> pfix;
    NumArray(vector<int>& nums) {
        pfix.resize(nums.size());
        pfix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pfix[i]=pfix[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return pfix[right];
        }
        return pfix[right]-pfix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
