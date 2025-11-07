#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    queue<int> q;
    cin >> n;
    for(int i =1; i<=n; i++) q.push(i);
    for(int i =0; i<n; i++){
        q.push(q.front());
        q.pop();
        int t=q.front();
        q.pop();
        if(q.empty()) cout << "\n";
        cout << t << " ";
    }
    return 0;
}
