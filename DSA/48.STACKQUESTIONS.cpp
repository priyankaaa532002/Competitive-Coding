#include <iostream>
#include <stack>
using namespace std;

//Parenthrsis matching 
bool ParanthesisMatching(string exp){
    stack<char> st;
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('){
            st.push(exp[i]);
        }else if(exp[i]==')'){
            if(st.empty()) return false;
            else st.pop();
        }
    }
    if (st.empty())
    {
        return true;
    }else{
        return false;
    }    
}

bool ParanthesisMatching2(string exp){
    stack<char> st;
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            st.push(exp[i]);
        }else if(exp[i]==')'){
            if(st.empty() || st.top() != '(') return false;
            else st.pop();
        }else if(exp[i]==']'){
            if(st.empty() || st.top() != '[') return false;
            else st.pop();
        }else if(exp[i]=='}'){
            if(st.empty() || st.top() != '{') return false;
            else st.pop();
        }
    }
    if (st.empty())
    {
        return true;
    }else{
        return false;
    }    
}

int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }else{
        return 1;
    }
}

int pre(char x){
    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='*' || x=='/'){
        return 2;
    }
    return 0;
}

//IMFIX TO POSTFIX
string convert(string exp){
    stack<char> st;
    string postfix;
    for (int i = 0; i < exp.length(); i++)
    {
        if (isOperand(exp[i]))
        {
            postfix += exp[i];
        }else{
            if(st.empty() || pre(exp[i]) > pre(st.top())){
                st.push(exp[i]);
            }else{
                while(!st.empty() && pre(exp[i])<=pre(st.top())){
                    postfix += st.top();
                    st.pop();
                }
                st.push(exp[i]);
            }
        }
    }
    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int evaluate(string exp){
    stack<int> st;
    int n1=0,n2=0,res=0;
    for (int i = 0; exp[i]!= '\0'; i++)
    {
        if(isOperand(exp[i])){
            st.push(exp[i] - '0');
        }else{
            n2 = st.top();
            st.pop();
            n1 = st.top();
            st.pop();
            switch (exp[i])
            {
            case '+' :
                res = n1 + n2;
                st.push(res);
                break;
            case '-' :
                res = n1 - n2;
                st.push(res);
                break;
            case '*' :
                res = n1 * n2;
                st.push(res);
                break;
            case '/' :
                res = n1 / n2;
                st.push(res);
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    // string str = "{a+b] + [a+b] +2*2)}";
    // //cout<<ParanthesisMatching(str);
    // cout<<ParanthesisMatching2(str);

    string exp = "3*5+6/2-4";
    string ans = convert(exp);
    cout<<evaluate(ans);
    return 0;
}