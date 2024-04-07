#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    int ptr;
};
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, h, x, y;
    vector<node> a(20001);
    cin>>n>>h;
    for(int i =1; i<=n; i++) cin>>a[i].val;
    for(int i =1; i<=n; i++) cin>>a[i].ptr;
    cin>>x>>y;
    int k=h;
    if(!y){
        a[h].ptr=h;
        h=n+1;
    }else{
        for(int i =1; i<y; i++) 
            k=a[k].ptr;
    }
    cout<<h<<"\n"<<x<<" " << a[k].ptr<<"\n";
    if(y) cout<<k<<" " << a[k].val<<" "<<n+1<<"\n";
    else cout << "-1\n";
    return 0;
}
