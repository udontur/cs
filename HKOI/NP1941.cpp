#include <bits/stdc++.h>
using namespace std;
bool val(int m, int d){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) return (d>=1&&d<=31);
    if(m==4||m==6||m==9||m==11) return (d>=1&&d<=30);
    return (d>=1&&d<=28);
}
bool valm(int m){return (m>=1&&m<=12);}
int main(){
    freopen("date.in", "r", stdin);
    freopen("date.out", "w", stdout);
    int m, d, cnt=0;
    char q;
    bool s1=0;
    cin >> m >> q >> d;
    if(!valm(m)){
        if(m%10==0) m=10;
        else if(m%10==1) m=1;
        else if(m%10==2) s1=1;
        else if(m%10==3) m=3;
        else if(m%10==4) m=4;
        else if(m%10==5) m=5;
        else if(m%10==6) m=6;
        else if(m%10==7) m=7;
        else if(m%10==8) m=8;
        else if(m%10==9) m=9;
        cnt++;
    }
    if(s1) {if(!val(2,d)&&!val(12,d)) cnt++;}
    else {if(!val(m, d)) cnt++;}
    cout << cnt;
    return 0;
}
