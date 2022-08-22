def cal(a,b,operator):
    if operator=='+':
        return int(a)+int(b)
    elif operator=='-':
        return int(a)-int(b)
    elif operator=='*':
        return int(a)*int(b)
    elif operator=='/':
        return int(a)/int(b)
        
class Solution:
    
    #Function to evaluate a postfix expression.
    def evaluatePostfix(self, S):
        operator=['*','/','+','-']
        temp=[]
        for i in S:
            if i not in operator:
                temp.append(i)
            else:
                if len(temp)>0:
                    temp1=temp.pop()
                    temp2=temp.pop()
                    res= cal(temp2,temp1,i)
                    temp.append(res)
        return temp[0]
