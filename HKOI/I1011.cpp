#include <bits/stdc++.h>
using namespace std;
#ifdef __cplusplus
extern "C" {
#endif
int Theory(int M, int L, int W);
void Solve();
#ifdef __cplusplus
}
#endif

void Solve() {
    int mur=1, loc=1, wea=1;
    int wrong=Theory(mur, loc, wea);
    while(wrong){
        if(wrong==1) mur++;
        if(wrong==2) loc++;
        if(wrong==3) wea++;
        wrong=Theory(mur, loc, wea);
    }
    return;
}
