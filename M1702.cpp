#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, o=0, x, y;
    double r;
    cin >> n >> r;
    for(int i =0; i<n; i++){
        double a, b, t;
        cin >> a >> b;
        x=a*10;
        y=b*10;
        t=x*x+y*y;
        if(t<=160000+8000*r+100*r*r) o+=10;
        else if(t<=640000+16000*r+100*r*r) o+=9;
        else if(t<=1440000+24000*r+100*r*r) o+=8;
        else if(t<=2560000+32000*r+100*r*r) o+=7;
        else if(t<=4000000+40000*r+100*r*r) o+=6;
        else if(t<=5760000+48000*r+100*r*r) o+=5;
        else if(t<=7840000+56000*r+100*r*r) o+=4;
        else if(t<=10240000+64000*r+100*r*r) o+=3;
        else if(t<=12960000+72000*r+100*r*r) o+=2;
        else if(t<=16000000+80000*r+100*r*r) o+=1;
    }
    cout << o;
}
