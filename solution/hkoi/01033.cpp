#include <bits/stdc++.h>
using namespace std;
int o=3;
int pre(char c){
	if(c=='+') return 1;
	if(c=='*') return 2;
	else return 3;
}
int main(){
	int n, len;
	string in, pos;
	cin >> n;
	for(int x=0; x<n; x++){
        stack <char> ts;
	    stack <int> ans;
		pos="";
		cin >> in;
		len = in.length();
		for(int i=0; i<len; i++){
			if((in[i] >='0')&&(in[i] <='9')){
				pos.append(1, in[i]);				
			}else{
				if(ts.empty()){
					ts.push(in[i]);
				}else{
					if(pre(in[i]) >= pre(ts.top())){
						ts.push(in[i]);
					}else{
						while(!ts.empty()){
							if(pre(in[i]) < pre(ts.top())){
								pos.append(1, ts.top());
								ts.pop();
                                if(ts.empty()){
									ts.push(in[i]);
                                    break;
								}
							}else{
								ts.push(in[i]);
								break;
							}
						}
					}
				}
			}
		}
		while(!ts.empty()){
			pos.append(1, ts.top());
			ts.pop();
		}
		for (int i=0; i<pos.length(); i++){
			if((pos[i] >='0')&&(pos[i] <='9')){
				ans.push(pos[i]-'0');				
			}else{
				int op1, op2;
				if(!ans.empty()){
                    op2 = ans.top();
                    ans.pop();
                }
				if(!ans.empty()){
                    op1 = ans.top();
                    ans.pop();
                }
				if(pos[i] == '+'){
					ans.push(op1+op2);
				}else if(pos[i] == '*'){
					ans.push(op1*op2);
				}else if(pos[i] == '^'){
					ans.push(pow(op1, op2));
				}
			}
		}
		cout << ans.top() << endl;
		ans.pop();
	}
    return 0;
}
