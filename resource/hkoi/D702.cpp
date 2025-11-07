#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    string in;
    stack<int>s;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> in;
        if(in=="PUSH"){
            cin >> x;
            s.push(x);
        }else if(in=="TOP"){
            if(s.empty()) cout << "Empty\n";
            else cout << s.top() << "\n";
        }else if(in=="POP"){
            if(s.empty()) cout << "Cannot pop\n";
            else s.pop();
        }else cout << s.size() << "\n";
    }
    return 0;
}
