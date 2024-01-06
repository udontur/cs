#include <bits/stdc++.h>
using namespace std;
int main() {
    long double n;
    char tr;
    cin >> tr >> n;
    n*=50;
    int ch=static_cast<int>(n);
    if(ch%10==5) ch+=5;
    cout << fixed << setprecision(1);
    cout << "$" << ch/100.0;
    return 0;
}
