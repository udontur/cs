#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    string in;
    queue<int>q;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> in;
        if(in=="PUSH"){
            cin >> x;
            q.push(x);
        }else if(in=="FRONT"){
            if(q.empty()) cout << "Empty\n";
            else cout << q.front() << "\n";
        }else if(in=="POP"){
            if(q.empty()) cout << "Cannot pop\n";
            else q.pop();
        }else cout << q.size() << "\n";
    }
    return 0;
}
