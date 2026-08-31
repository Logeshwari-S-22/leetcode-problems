class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        HashSet<Integer> st=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            st.add(nums[i]);
        }
        int mn=nums[0];
        for(int i=0;i<nums.length;i++){
            if(nums[i]<mn){
                mn=nums[i];
            }
        }
        int mx=nums[0];
        for(int i=0;i<nums.length;i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
        }
        ArrayList<Integer> ans=new ArrayList<>();
        for(int x=mn;x<=mx;x++){
            if(!st.contains(x)){
                ans.add(x);
            }
        }
        return ans;
    }
}
