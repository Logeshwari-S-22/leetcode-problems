class Solution {
public:
    int calculate(string s) {
        stack<int> sk;
        long long result=0;
        long long num=0;
        int sign=1;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='+'){
                result+=num*sign;
                num=0;
                sign=1;
            }
            else if(s[i]=='-'){
                result+=num*sign;
                num=0;
                sign=-1;
            }
            else if(s[i]=='('){
                sk.push(result);
                sk.push(sign);
                result=0;
                sign=1;
            }
            else if(s[i]==')'){
                result+=num*sign;
                num=0;
                int prevsign=sk.top();
                sk.pop();
                long long prevres=sk.top();
                sk.pop();
                result=prevres+ prevsign*result;
            }
        }
        result+=sign*num;
        return (int)result;
    }
};
