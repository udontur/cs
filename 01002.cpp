#include <bits/stdc++.h>
using namespace std;
int main() {
    int ans=0;
    string check, obj;
    getline(cin, check);
    getline(cin, obj);
    for (int i =0; i<=check.length()-obj.length(); i++) {
        if(check.substr(i, obj.length())==obj) ans++;
        if(check.length()<=obj.length()) break;
    }
    cout << ans;
    return 0;
}
