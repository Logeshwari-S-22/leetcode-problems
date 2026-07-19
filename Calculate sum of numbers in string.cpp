#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int findSum(string str)
{
   string temp="";
   int sum=0;
   for(char ch:str){
       if(isdigit(ch)){
           temp+=ch;
       }
       else{
           if(!temp.empty()){
           sum+=stoi(temp);
           temp="";}
       }
   }
   if(!temp.empty()){
       sum+=stoi(temp);
   }
   return sum;
}

int main()
{
    string str = "12abc20yz68";
    cout << findSum(str);
    return 0;
}
