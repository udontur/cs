#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, m, x, o=0, p[2001];
    priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    queue <int> q;
    pair<int, int> a[2001];
    cin >> n >> m;
    for(int i =0; i<n; i++){
        cin >> x;
        pq.push(make_pair(i, x));
    }
    for(int i =0; i<m; i++) cin >> p[i];
    for(int i =0; i<m*2; i++){
        cin >> x;
        if(x<0){
            x=(x*-1)-1;
            pq.push(a[x]);
            if(!q.empty()&&!pq.empty()){
                while(!q.empty()&&!pq.empty()){
                    o+=pq.top().second*p[q.front()];
                    a[q.front()]=make_pair(pq.top().first, pq.top().second);
                    pq.pop();
                    q.pop();
                }
            }
        }else{
            x--;
            if(pq.empty()) q.push(x);
            else{
                if(!q.empty()){
                    q.push(x);
                    while(!q.empty()&&!pq.empty()){
                        o+=pq.top().second*p[q.front()];
                        a[q.front()]=make_pair(pq.top().first, pq.top().second);
                        pq.pop();
                        q.pop();
                    }
                }else{
                    o+=pq.top().second*p[x];
                    a[x]=make_pair(pq.top().first, pq.top().second);
                    pq.pop();
                }
            }
        }
    }
    cout << o;
    return 0;
}
