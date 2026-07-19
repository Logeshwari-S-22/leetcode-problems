#include<iostream>
#include<cstring>
using namespace std;

void minMaxLengthWords(string input, string &minWord, string &maxWord) 
{
     int len=input.length();
     int si=0,ei=0;
     int min_length=len,max_start_idx=0,max_length=0,min_start_idx=0;
     while(ei<=len){
         if(ei<len && input[ei]!=' '){
             ei++;
         }
         else{
         int curr_length=ei-si;
         if(curr_length<min_length){
             min_length=curr_length;
             min_start_idx=si;
         }
         if(curr_length>max_length){
             max_length=curr_length;
             max_start_idx=si;
         }
         ei++;
         si=ei;
     }
     }
     minWord=input.substr(min_start_idx,min_length);
     maxWord=input.substr(max_start_idx,max_length);
}

int main() 
{
    string a = "This is a test string";
    string minWord, maxWord;
    minMaxLengthWords(a, minWord, maxWord);
    cout << "Minimum length word: "
        << minWord << endl
        << "Maximum length word: "
        << maxWord << endl;
}
