#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <char> arr;
    string in;
    char rnd;
    getline(cin, in);
    int len=in.length();
    for(int i =0; i < len; i++){
        if((in[i]=='[')||(in[i]=='{')||(in[i]=='(')){
            arr.push(in[i]);
        }else if((in[i]==']')||(in[i]=='}')||(in[i]==')')){
            if(arr.empty()){
                cout << "No";
                return 0;
            }
            rnd=arr.top();
            arr.pop();
            if(in[i]==']'){
                if(rnd != '['){
                    cout << "No";
                    return 0;
                }
            }else if(in[i]=='}'){
                if(rnd != '{'){
                    cout << "No";
                    return 0;
                }
            }else if(in[i]==')'){
                if(rnd != '('){
                    cout << "No";
                    return 0;
                }
            }
        }
    }
    if(arr.empty()) cout << "Yes";
    else cout << "No";
    return 0;
}
