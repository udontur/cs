#include <bits/stdc++.h>
using namespace std;
typedef long long int long long;
int main() {
    long long a, b, c, d, e, f, x=0, y=0, cnt=0, j;
    cin >> a >> b >> c >> d >> e >> f;
    for(long long i =-50000000; i<=50000000; i++){
        if(b==0){
            if(c != a*i) continue;
            j=0;
        }else{
            j=c-a*i;
            if(j%b!=0) continue;
            j/=b;
        }
        if((d*i)+(e*j)==f){
            x=i;
            y=j;
            cnt++;
        }
    }
    if(cnt==0) cout << "no solution";
    else if(cnt==1) {
        if((a*x)+(b*y)==c&&(d*x)+(e*y)==f) cout << x << " " << y;
        else cout << "no solution"; 
    }
    else cout << "many solutions";
    return 0;
}
