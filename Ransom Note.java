class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int[] countArr=new int[26];
        for(char ch:magazine.toCharArray()){
            countArr[ch-'a']++;
        }
        for(char c:ransomNote.toCharArray()){
            if(countArr[c-'a']==0){
                return false;
            }
            countArr[c-'a']--;
        }
        return true;
    }
}
