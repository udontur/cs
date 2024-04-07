#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int n){
    bool inc=1;
    bool dec=1;
    for(int i =0; i<n-1; i++) if(a[i]>a[i+1]) inc=0;
    for(int i =0; i<n-1; i++) if(a[i]<a[i+1]) dec=0;
    return inc||dec;
}
int main() {
    int n, m, in[100001]{0}, a[100001]{0};
    bool ans=0;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> m;
        if(m % 2 != 0){
            cout << "-1\n";
            for(int j =0; j<m; j++) cin >> in[j];
            continue;
        }
        for(int j =0; j<m; j++) in[j]=0;
        for(int j =0; j<m; j++) a[j]=0;
        for(int j =0; j<m; j++) cin >> in[j];
        for(int j =0; j<m/2; j++) a[j]=in[j+m/2];
        for(int j =0; j<m/2; j++) a[j+m/2]=in[j];
        ans=check(a, m);
        if(ans) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
