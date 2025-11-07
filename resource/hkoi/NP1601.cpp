#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("pencil.in", "r", stdin);
    freopen("pencil.out", "w", stdout);
    long long n, aa, ab, ac, pena, penb, penc, chk;
    double ba, bb, bc;
    cin>>n>>ba>>aa>>bb>>ab>>bc>>ac;
    pena=ceil(n/ba)*aa;
    penb=ceil(n/bb)*ab;
    penc=ceil(n/bc)*ac;
    if(pena<penb && pena<penc) chk=1; 
    else if(penb<penc) chk=2; 
    else if(penc<pena&&penc<penb) chk=3;
    if(chk==1) cout << pena;
    else if(chk==2) cout << penb;
    else if(chk==3) cout << penc;
    return 0;
}
