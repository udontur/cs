#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[11];
    cin >> n;
    for(int i =0; i<n; i++) cin >> a[i];
    sort(a, a+n, greater<int>());
    cout << a[0] << "\n" << a[1];
    return 0;
}
