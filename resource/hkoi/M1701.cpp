#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<(b+c)+(2*d)+(a>2*d)*((a-2*d)/2+a%2);
    return 0;
}
