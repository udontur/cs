#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n, m, b1=0, b2=0, b3=0, a=0, x;
    int a1[3001], a2[3001], a3[3001];
    cin >> n >> m;
    for(int i =0; i<m; i++) cin>>a1[i];
    for(int i =0; i<m; i++) cin>>a2[i];
    for(int i =0; i<m; i++) cin>>a3[i];
    sort(a1, a1+m);
    sort(a2, a2+m);
    sort(a3, a3+m);
    for(int i =0; i<m; i++){
        int k=m-1;
        for(int j=0; j<m; j++){
            while(a1[i]+a2[j]+a3[k]>n&&k>=0) k--;
            if(k<0) continue;
            int o=a1[i]+a2[j]+a3[k];
            if(o>a&&o<=n){
                a=o;
                b1=a1[i];
                b2=a2[j];
                b3=a3[k];
            }
        }
    }
    cout<<b1<<" "<<b2<<" "<<b3<<"\n";
    return 0;
}
