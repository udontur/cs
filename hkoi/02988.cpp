#include <bits/stdc++.h>
using namespace std;
bool ip(int n){
    if(n==1) return 0;
    for(int i =2; i<n; i++)
        if(!(n%i)) 
            return 0;
    return 1;
}
int main() {
    int l, r, sum, x1, x2, ans=0;
    cin >> l >> r >> sum;
    for(int i =l; i<=r; i++){
        if(ip(i)){
            x1=i;
            x2=i;
            ans=0;
            int n=to_string(x1).length();
            for(int i =0; i<n; i++){
                ans+=x2%10;
                x2/=10;
            }
            if(ans==sum) cout << i << "\n";
        }
    }
    cout << "Finish!";
    return 0;
}
