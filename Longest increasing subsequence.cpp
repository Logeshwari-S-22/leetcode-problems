class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        vector<int> temp;
        for(int x:nums){
            int pos=lower_bound(temp.begin(),temp.end(),x)-temp.begin();
            if(pos==temp.size()){
                temp.push_back(x);
            }
            else{
                temp[pos]=x;
            }
        }
        return temp.size();
    }
};
