#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("account.txt", "r", stdin);
    int n, x, o=0;
    cin >> n;
    while(n--){
        cin >> x;
        o+=x;
    }
    cout << o;
    return 0;
}
