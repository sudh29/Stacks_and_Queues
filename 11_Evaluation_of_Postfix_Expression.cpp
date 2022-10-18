class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        int n = S.length();
        int res;
        int a,b;
        stack<int> temp;
        for (int i=0;i<n;i++){
            if ((S[i]=='+' || S[i]=='-' || S[i]=='*' || S[i]=='/') and temp.size()>0){
                a=temp.top();
                temp.pop();
                b=temp.top();
                temp.pop();
                if(S[i]=='+')
                    res = int(a)+int(b);
                else if (S[i]=='-')
                    res = int(b)-int(a);
                else if (S[i]=='*')
                    res = int(a)*int(b);
                else if (S[i]=='/')
                    res = int(b)/int(a);
                temp.push(res);
            }
            else {
                temp.push(int(S[i]-'0'));
            }
        }
        return temp.top();
    }
};
