class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> sk;
        for(string tok:tokens){
            if(tok=="+" || tok=="-" || tok=="*" || tok=="/"){
                int b=sk.top();
                sk.pop();
                int a=sk.top();
                sk.pop();
                int result;
                if(tok=="+"){
                    result=a+b;
                }
                else if(tok=="-"){
                    result=a-b;
                }
                else if(tok=="*"){
                    result=a*b;
                }
                else{
                    result=a/b;
                }
                sk.push(result);
            }
            else{
                sk.push(stoi(tok));
            }
        }
        return sk.top();
    }
};
