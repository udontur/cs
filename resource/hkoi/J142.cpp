#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, t, y, a=0, b=0, c=0, d=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        if(t<=3) cin >> y;
        if(t==1){
            a+=y;
            b+=y;
        }
        if(t==2){
            c+=y;
            d+=y;
        }
        if(t==3){
            if(b<y){
                c-=y-b;
                b=0;
            }else b-=y;
            if(d<y){
                a-=y-d;
                d=0;
            }else d-=y;
        }
        if(t==4){
            cout << a << " " << b << "\n";
        }
    }
    return 0;
}
