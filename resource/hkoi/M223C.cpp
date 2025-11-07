#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[6], t1, t2, t3, t4;
    char e;
    cin >> n;
    for(int i =0; i<6; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        cin >> e;
        if(e=='R'){
            t1=a[3];
            t2=a[1];
            t3=a[2];
            t4=a[0];
            a[0]=t1;
            a[3]=t2;
            a[1]=t3;
            a[2]=t4;
        }else if(e=='L'){
            t1=a[0];
            t2=a[3];
            t3=a[1];
            t4=a[2];
            a[3]=t1;
            a[1]=t2;
            a[2]=t3;
            a[0]=t4;
        }else if(e=='D'){
            t1=a[4];
            t2=a[1];
            t3=a[5];
            t4=a[0];
            a[0]=t1;
            a[4]=t2;
            a[1]=t3;
            a[5]=t4;
        }else if(e=='U'){
            t1=a[0];
            t2=a[4];
            t3=a[1];
            t4=a[5];
            a[4]=t1;
            a[1]=t2;
            a[5]=t3;
            a[0]=t4;
        }
    }
    for(int i =0; i<6; i++) cout <<a[i] << " ";
    return 0;
}
