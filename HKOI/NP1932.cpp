#include <bits/stdc++.h>
#define int long long
using namespace std;
int dis(int a[], int n){
    set <int> s;
    for(int i=0; i<n; i++) s.insert(a[i]);
    return s.size();
}
int32_t main() {
    freopen("second.in", "r", stdin);
    freopen("second.out", "w", stdout);
    int n, m1=0 ,m2=0, m3=0, a[200001];
    cin >> n;
    for(int i =0; i<n; i++) cin >> a[i];
    if(dis(a,n)==1) cout << "-1";
    else if(dis(a,n)==2){
        for(int i =0; i<n; i++){
            if(a[i]>m1&&a[i]!=m2&&a[i]!=m3){
                m3=m2;
                m2=m1;
                m1=a[i];
            }else if(a[i]>m2&&a[i]!=m3&&a[i]!=m1){
                m3=m2;
                m2=a[i];
            }else if(a[i]>m3&&a[i]!=m2&&a[i]!=m1){
                m3=a[i];
            }
        }
        cout << m1%m2;
    }else{
        for(int i =0; i<n; i++){
            if(a[i]>m1&&a[i]!=m2&&a[i]!=m3){
                m3=m2;
                m2=m1;
                m1=a[i];
            }else if(a[i]>m2&&a[i]!=m3&&a[i]!=m1){
                m3=m2;
                m2=a[i];
            }else if(a[i]>m3&&a[i]!=m2&&a[i]!=m1){
                m3=a[i];
            }
        }
        if(m3>m1%m2) cout << m3;
        else cout << m1%m2;
    }  
    return 0;
}
