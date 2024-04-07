#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    int ans=0;
    for(int i =0; i<n-1; i++){
        int x1=pq.top();
        pq.pop();
        int x2=pq.top();
        pq.pop();
        pq.push(x1+x2);
        ans+=x1+x2;
    }
    cout<<ans;
    return 0;
}
