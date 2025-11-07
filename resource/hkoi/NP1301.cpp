#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("count.in", "r", stdin);
    freopen("count.out", "w", stdout);
    int n, ans=0;
    char x;
    cin >> n >> x;
    for(int i =1; i<=n; i++){
        string s=to_string(i);
        for(int j =0; j<s.length(); j++)
            if(s[j]==x)
                ans++;
    }
    cout << ans;
}
