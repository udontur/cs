#include <bits/stdc++.h>
using namespace std;
int main() {
    double h, m, s, hp, mp, dx;
    char dump;
    cin >> h >> dump >> m >> dump >>s;
    if(h>=12) h-=12;
    hp=(h*30)+(m/2)+(s/120);
    mp=(m*6)+(s/10);
    dx=abs(hp-mp);
    if(dx>=180) dx=360-dx;
    if(dx==0) cout<<0;
    else cout<<fixed<<setprecision(10)<<dx;
    return 0;
}
