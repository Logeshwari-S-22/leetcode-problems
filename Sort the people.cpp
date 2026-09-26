class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        vector<pair<int,string>> vec;
        for(int i=0;i<n;i++){
            vec.push_back({heights[i],names[i]});
        }
        sort(vec.rbegin(),vec.rend());
        vector<string> ans;
        for(int i=0;i<n;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
