#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("area.in", "r", stdin);
    freopen("area.out", "w", stdout);
    long long a, b, c;
    cin >> a >> b >> c;
    if(a*a>b*c) cout << "Alice";
    else cout << "Bob";
    return 0;
}
