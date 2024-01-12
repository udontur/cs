#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, f[11]{0}, maxv=0, ans=0;
    string s;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> s;
        maxv=0;
        ans=0;
        for(int j =0; j<s.length();j++){
            f[s[j]-'0']++;
            for(int k =0;k<10;k++){
                maxv=max(maxv, f[k]);
                if(maxv==f[k]) ans=k;
            }
            cout << ans;
        }
        for(int j=0; j<10;j++) f[j]=0;
        cout << "\n";
    }
    return 0;
}
