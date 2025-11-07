#include <bits/stdc++.h>
using namespace std;
int main() {
    while(1){
        int x, o=1, a[5]{0}, cur;
        cin >> x;
        if(!x) return 0;
        while(o<=x){
            cur=o;
            if(cur==100){
                a[4]++;
                cur-=100;
            }
            while(cur>=50){
                if(cur/10==9){
                    a[2]++;
                    a[4]++;
                    cur-=90;
                }else{
                    a[3]++;
                    cur-=50;
                }
            }
            while(cur>=10){
                if(cur/10==4){
                    a[2]++;
                    a[3]++;
                    cur-=40;
                }else{
                    a[2]++;
                    cur-=10;
                }
            }
            while(cur>=5){
                if(cur==9){
                    a[0]++;
                    a[2]++;
                    cur-=9;
                }else{
                    a[1]++;
                    cur-=5;
                }
            }
            while(cur>=1){
                if(cur==4){
                    a[0]++;
                    a[1]++;
                    cur-=4;
                }else{
                    a[0]++;
                    cur-=1;
                }
            }
            o++;
        }
        cout << x << ": " << a[0] << " i, " << a[1] << " v, " << a[2] << " x, " << a[3] << " l, " <<a[4]<< " c\n";
    }
    return 0;
}
