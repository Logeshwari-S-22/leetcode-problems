#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool areAnagrams(string &s1, string &s2) {
    if(s1.length()!=s2.length()){
        return false;
    }
    unordered_map<char,int> freq;
    for(char ch:s1){
        freq[ch]+=1;
    }
    for(char ch:s2){
        freq[ch]-=1;
    }
    for(auto& pair :freq){
        if(pair.second!=0){
            return false;
        }
    }
    return true;
}

int main() {
    
    string s1 = "allergy";
    string s2 ="allergyy";
    
	if(areAnagrams(s1, s2)){
	    cout << "true";
	} 
	else{
	    cout << "false";
	}
	
    return 0;
}
