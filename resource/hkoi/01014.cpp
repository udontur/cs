#include <bits/stdc++.h>
using namespace std;
int main() {
    double v;
    int t;
    cin >> v;
    t=v*10;
    while(true){
        int a[9]{0}, o=0, c[9]{1, 2, 5, 10, 20, 50, 100, 200, 500}, m=t;
        bool val=false;
        for(int i =8; i>=0; i--){
            while(m>=c[i]){
                m-=c[i];
                a[i]++;
                o++;
                if(o==4||m==0) {
                    val=true;
                    break;
                }
            }
            if(val) break;
        }
        if(m!=0) t++;
        else{
            cout << "$" << (double)t/10 << endl;
            for(int i =8; i>=0; i--){
                if(a[i]!=0){
                    cout << a[i] << " $" << (double)c[i]/10 << endl;
                }
            }
            break;
        }
    }
    return 0;
}
