#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> cntsort(vector<int>a, int n){
    int c[200001];
    for(int i =0; i<200001; i++) c[i]=0;
    for(int i =0; i<n; i++) c[a[i]]++;
    int ptr=0;
    for(int i =200000; i>=0; i--){
        if(c[i]>=1){
            for(int j=0; j<c[i]; j++){
                a[ptr]=i;
                ptr++;
            }
        }
    }
    return a;
}
signed main(){
    int n, m, p, s, h1, h2=0, ptr=0, ans=0;
    vector<int> v(200001);
    cin >> n >> m;
    for(int i =0; i<n; i++){
        cin >> p >> s;
        v[i]=p+s;
        if(h2<s) h2=s;
    }
    v=cntsort(v, n);
    for(int i =0; i<m; i++){
        h1=v[ptr];
        if(h1<h2||ptr==n) ans+=h2;
        else{
            ans+=h1;
            ptr++;
        }
    }
    cout << ans;
    return 0;
}
