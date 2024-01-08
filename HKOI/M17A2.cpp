#include <bits/stdc++.h>
#define pb push_back
#define bgn(a) (a).begin()
#define end(a) (a).end()
#define all(a) bgn(a), end(a)
using namespace std;
template<class T>void xdup(vector<T> &v){sort(all(v));v.erase(unique(all(v)), end(v));}
int main(){
    int n;
    vector<int> a;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        a.pb(x);
    }
    xdup(a);
    int ans=0;
    for(auto i: a) ans+=i;
    cout<<ans;
}
