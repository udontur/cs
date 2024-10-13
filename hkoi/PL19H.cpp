#include <bits/stdc++.h>
using namespace std;
int main() {
    int w[3], h[3];
    for(int i =0; i<3; i++) cin>>w[i];
    for(int i =0; i<3; i++) cin>>h[i];
    int ans=0, str=2;
    for(int i =2; i>=0; i--){
        int cur=h[i];
        for(int j =str; j>=0; j--){
            if(cur>w[j]){
                ans++;
                str=j-1;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}
