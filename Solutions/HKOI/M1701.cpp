#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    long long o=b+c;
    o+=2*d;
    if(a>2*d) o+=((a-2*d)/2+a%2);
    cout<<o;
    return 0;
}
