class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int m=arr1.size();
        int n=arr2.size();
        unordered_map<int,int> freq;
        for(int i=0;i<m;i++){
            freq[arr1[i]]++;
        }
        int idx=0;
        for(int i=0;i<n;i++){
            while(freq[arr2[i]]){
                arr1[idx++]=arr2[i];
                freq[arr2[i]]--;
            }
            freq.erase(arr2[i]);
        }
        vector<int> remain;
        for(auto& pair:freq){
            while(pair.second--){
                remain.push_back(pair.first);
            }
        }
        sort(remain.begin(),remain.end());
        for(int i:remain){
            arr1[idx++]=i;
        }
        return arr1;
    }
};
