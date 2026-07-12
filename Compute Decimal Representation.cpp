class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        int temp=n;
        long long place=1;
        while(temp>0){
            int last_dig=temp%10;
            if(last_dig!=0){
                res.push_back(last_dig*place);
            }
            place*=10;
            temp/=10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};



