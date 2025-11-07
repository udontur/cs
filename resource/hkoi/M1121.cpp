#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q, k=1;
    priority_queue<int> pq;
    bool brk=0;
    cin >>n;
    for(int i =0; i<n; i++){
        cin >> q;
        pq.push(q);
    }
    while(!pq.empty()){
        priority_queue <int> tmp;
        for(int i =1; i<=k; i++){
            if(pq.empty()){
                brk=1;
                break;
            }
            int t=pq.top();
            pq.pop();
            t--;
            if(t!=0) tmp.push(t);
        }
        if(brk) break;
        int len=tmp.size();
        for(int i =0; i<len; i++){
            pq.push(tmp.top());
            tmp.pop();
        }
        k++;
    }
    cout << k-1 << endl;
    return 0;
} 
