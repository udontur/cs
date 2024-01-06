#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll n, value, pt1, pt2, ans = 0;
    priority_queue <ll, vector<ll>, greater<ll>> pq;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> value;
        pq.push(value);
    }
    for(int i =0; i<n-1; i++){
        pt1 = pq.top();
        pq.pop();
        pt2 = pq.top();
        pq.pop();
        pq.push(pt1+pt2);
        ans+=pt1+pt2;
    }
    cout << ans << endl;
    return 0;
}
