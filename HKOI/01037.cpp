#include <bits/stdc++.h>
using namespace std;
vector <string> v;
void recur(string s, string ans, int m, int i) {
    if(ans.length()==m) {
        v.push_back(ans);
        return;
    }
    if(i==s.length()) return;
    recur(s, ans+s[i], m, i+1);
    recur(s, ans, m, i+1);
}
int main() {
    string s, ans="";
    int n, m, k;
    cin >> n >> m >> k >> s;
    sort(s.begin(), s.end());
    recur(s, ans, m, 0);
    sort(v.begin(), v.end());
    v.resize(v.end()-unique(v.begin(), v.end()));
    for(int i =0; i<k; i++) cout << v[i] << endl;
    return 0;
}
