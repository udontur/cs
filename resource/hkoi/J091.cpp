#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int main() {
    int na, nb, n=0;
    pair<int, int> a[200001];
    cin>>na;
    n+=na;
    for(int i =0; i<na; i++) cin>>a[i].f>>a[i].s;
    cin>>nb;
    n+=nb;
    for(int i =na; i<nb+na; i++) {
        cin>>a[i].f>>a[i].s;
        if(a[i].f>a[i].s) swap(a[i].f, a[i].s);
    }
    sort(a, a+n, [&](pair<int, int> a, pair<int, int> b){
        if(a.f>b.f) return 0;
        else if(a.f<b.f) return 1;
        else{
            if(a.s>b.s) return 0;
            else return 1;
        }
    });
    //for(int i =0; i<n; i++) cout<<a[i].f<<" "<<a[i].s<<"\n";
    bool m[200001];
    for(int i =0; i<n; i++) m[i]=1;
    for(int i =1; i<n; i++){
        if(a[i].f<=a[i-1].s+1){
            a[i].f=a[i-1].f;
            if(a[i-1].s>a[i].s) a[i].s=a[i-1].s;
            m[i-1]=0;
        }
    }
    int on=0;
    vector<pair<int, int>> ans;
    for(int i =0; i<n; i++){
        if(m[i]){
            on++;
            ans.push_back(make_pair(a[i].f, a[i].s));
        }
    }
    sort(ans.begin(), ans.end(), [&](pair<int, int> a, pair<int, int> b){
        if(a.f>b.f) return 0;
        else if(a.f<b.f) return 1;
        else{
            if(a.s>b.s) return 0;
            else return 1;
        }
    });
    cout<<on<<"\n";
    for(auto i: ans){
        cout<<i.f<<" "<<i.s<<"\n";
    }
    return 0;
}
