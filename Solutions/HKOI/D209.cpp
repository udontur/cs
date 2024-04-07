#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[21];
    for(int i =0; i<n; i++) cin >> a[i];
    for(int i =0; i<n-1; i++){
        if(a[i]==a[i+1]||a[i]>a[i+1]||a[i]<=100||a[i]>=50000){
            cout << "Invalid";
            return 0;
        }
    }
    if(a[n-1]<=100||a[n-1]>=50000) cout << "Invalid";
    else cout << "Valid";
    return 0;
}
