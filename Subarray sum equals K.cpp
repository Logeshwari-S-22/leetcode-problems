class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int prefixSum=0;
        int ct=0;
        for(int n:nums){
            prefixSum+=n;
            if(mp.find(prefixSum-k)!=mp.end()){
                ct+=mp[prefixSum-k];
            }
            mp[prefixSum]++;
        }
        return ct;
    }
};
