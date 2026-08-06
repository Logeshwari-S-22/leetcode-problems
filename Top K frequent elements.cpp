class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto it:freq){
            int number=it.first;
            int frequency=it.second;
            bucket[frequency].push_back(number);
        }
        vector<int> ans;
        for(int i=nums.size();i>=0;i--){
            for(int i:bucket[i]){
                ans.push_back(i);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
