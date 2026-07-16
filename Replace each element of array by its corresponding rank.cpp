class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> carr=arr;
        sort(carr.begin(),carr.end());
        unordered_map<int,int> map;
        int rank=1;
        for(int nums:carr){
            if(map.find(nums)==map.end()){
                map[nums]=rank;
                rank++;
            }
        }
        vector<int> result;
        for(int num:arr){
            result.push_back(map[num]);
        }
        return result;
    }
};
