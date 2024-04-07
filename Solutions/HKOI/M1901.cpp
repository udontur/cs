#include <bits/stdc++.h>
using namespace std;
int main() {
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(10);
    cout << (acos(-1.0)*pow((x/4.0),2.0))+((x*y)/2.0);
    return 0;
}
