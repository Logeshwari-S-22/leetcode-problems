class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        sort(citations.begin(),citations.end());
        for(int i=0;i<n;i++){
            int p=n-i;
            if(citations[i]>=p){
                return p;
            }
        }
        return 0;
    }
};
