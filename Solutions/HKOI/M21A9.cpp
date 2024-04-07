#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long num=1;
        int n, ans=0;
        cin >> n;
        for(int i =0; i<n%100; i++){
            num*=n/100;
            if(num>(1<<31)-1){
                ans=1;
                break;
            }
        }
        num=1;
        for(int i=0;i<n%10;i++){
            num*=n/10;
            if(num>(1<<31)-1){
                ans=1;
                break;
            }
        }
        cout << ans << "\n";
    }
}
