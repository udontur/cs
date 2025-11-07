#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("power.in", "r", stdin);
    freopen("power.out", "w", stdout);
    int n, start, pt=0, num=0, a[10001], cnt=0;
    cin >> n;
    start=log2(n);
    while(start!=0){
        if(num+pow(2, start)<n){
            a[pt++]=pow(2, start);
            num+=pow(2, start);
            cnt++;
        }else if(num+pow(2, start)==n){
            a[pt++]=pow(2, start);
            num+=pow(2, start);
            cnt++;
            for(int i =0; i<cnt; i++) cout << a[i] << " ";
            return 0;
        }
        start--;
    }
    cout << "-1";
    return 0;
}
