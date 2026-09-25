class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        for(int i=0;i<s;i++){
            if(flowerbed[i]==0){
                bool lb=(i==0 || flowerbed[i-1]==0);
                bool rb=(i==s-1 || flowerbed[i+1]==0);
                if(lb && rb){
                    flowerbed[i]=1;
                    n--;
                    if(n==0){
                        return true;
                    }
                }
            }
        }
         return n<=0;
    }
};
