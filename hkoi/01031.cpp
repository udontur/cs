#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s, a[10001];
    cin >> n >> n >> s;
    sort(s.begin(), s.end());
    a[0]=s;
    for(int i =1; i<n; i++){
        next_permutation(s.begin(), s.end());
        a[i]=s;
    }
    for(int i =0; i<n; i++) cout << a[i] << "\n";
    return 0;
}
