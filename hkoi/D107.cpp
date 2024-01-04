#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long t1=ceil(sqrt(n));
    long double m=(-1.0+sqrt(1.0+8.0*n))/2.0;
    bool sqr=(t1*t1==n);
    bool tri=(ceil(m)==floor(m));
    if(sqr&&tri) cout << "Both";
    else if(sqr&&!tri) cout << "Square";
    else if(!sqr&&tri) cout << "Triangular";
    else cout << "Neither";
    return 0;
}
