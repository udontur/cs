#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=0, a[5001], b[5001];
    cin>>n;
    for(int i =0; i<n; i++) cin>>a[i];
    for(int i =0; i<n; i++) cin>>b[i];
    sort(a, a+n, greater<int>());
    sort(b, b+n, greater<int>());
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(b[j]<a[i]){
                a[i]=-30001;
                b[j]=30001;
                ans++;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}
