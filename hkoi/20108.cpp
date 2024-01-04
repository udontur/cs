#include <bits/stdc++.h>
using namespace std;
int kad(int a[], int n){
    int mx=-1e9, tmp=0;
    for(int i =0; i<n; i++){
        if(tmp+a[i]>a[i]) tmp+=a[i];
        else tmp=a[i];
        if(tmp>mx) mx=tmp;
    }
    return mx;
}
int main(){
    int n, mx=-1e9, l, r, u, d;
    cin >> n;
    int a[101][101];
    for(int i =0; i<n; i++)
        for(int j =0; j<n; j++)
            cin >> a[i][j];
    for(int i =0; i<n; i++){
        int t[101]{0};
        for(int j =i; j<n; j++){
            for(int k =0; k<n; k++) t[k]+=a[j][k];
            int tmp=kad(t, n);
            if(tmp>mx) mx=tmp;
        }
    }
    cout << mx;
    return 0;
}
