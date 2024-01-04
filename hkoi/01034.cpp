#include <bits/stdc++.h>
using namespace std;
stack <int> num;
stack <int> chr;
int pre(char c){
    if(c=='+') return 1;
    else if(c=='*') return 2;
    else return 3;
}
void cal(){
    char op=chr.top();
    chr.pop();
    int op2=num.top();
    num.pop();
    int op1=num.top();
    num.pop();
    int ans;
    if(op=='+') ans=op1+op2;
    else if(op=='*') ans=op1*op2;
    else ans=pow(op1, op2);
    num.push(ans);
}
int main (){
    int x;
    cin >> x;
    while(x--){
        num=stack<int>();
        chr=stack<int>();
        string s;
        cin >> s;
        int len=s.length();
        for(int i =0; i<len; i++){
            if(isdigit(s[i])){
                int n=s[i]-48;
                while(i+1>len&&isdigit(s[i+1])){
                    n=n*10+(s[i+1]-48);
                    i++;
                }
                num.push(n);
            }else if(s[i]=='('){ chr.push(s[i]); 
            }else if(s[i]==')'){
                while(!chr.empty()&&chr.top()!='(') cal();
                if(!chr.empty()) chr.pop();
            }else{
                while(!chr.empty()&&chr.top()!='('&&pre(s[i])<pre(chr.top())) cal();
                chr.push(s[i]);
            }
        }
        while(!chr.empty()) cal();
        cout << num.top() << endl;
    }
    return 0;
}
