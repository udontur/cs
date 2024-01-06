#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cd[300001], t,ans=0;
    cin >> n;
    t=n;
    for(int i =0; i<n; i++) cin >> cd[i];
    for(int i =n-1; i>=0; i--){
        if(cd[i]==t){
            t--;
            ans++;
        }
    }
    cout << n-ans << endl;
    return 0;
}
