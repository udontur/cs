#include <bits/stdc++.h>
using namespace std;
int main() {
    int fac, num = 0;
    cin >> fac;
    while (fac >= 4) {
        fac = fac/2;
        num++;
    }
    if (fac==3) cout << "3";
    if (fac==2) num++;
    for (int i =0; i<num; i++) cout <<"2";
    return 0;
}
