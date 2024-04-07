#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k, ans = 0, book[100001]{0}, cnt =0;
    cin >> n >> m >> k;
    for(int i =0; i<m; i++) cin >> book[i];
    reverse(book, book+m);
    for(int i =0; i<k; i++) {
        ans+=book[cnt];
        cnt++;
        cnt%=n+1;
    }
    cout << ans << "\n";
    return 0;
}
