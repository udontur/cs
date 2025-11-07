#include <bits/stdc++.h>
using namespace std;
long double dec(long double val){
    long double n = (int)(val * 100);
    return (long double)n / 100;
}
int main() {
    long double n, val, per;
    int cnt;
    cin >> n >> per >> cnt;
    per /= 100;
    for(int i =0; i < cnt; i++){
        val = n * per;
        n -= dec(val);
    }
    cout << fixed << setprecision(2);
    cout << n << "\n";
    return 0;
}
