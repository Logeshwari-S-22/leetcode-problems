class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        int result;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto &entry:freq){
            if(entry.second>1){
                result= entry.first;
            }
        }
        return result;
    }
};
