#include <bits/stdc++.h>
using namespace std;
void r(string s, string ans, int r, int i) {
    if(ans.length()==r) {
        cout << ans << endl;
        return;
    }
    if(i==s.length()) return;
    r(s, ans+s[i], r, i+1);
    r(s, ans, r, i+1);
}
int main() {
    string s, ans="";
    int r;
    cin >> s >> r;
    sort(s.begin(), s.end());
    r(s, ans, r, 0);
    return 0;
}
