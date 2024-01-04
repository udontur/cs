#include <bits/stdc++.h>
using namespace std;
int main() {
    int n1, n2, n3;
    char m1, m2;
    cin >> n1 >> m1 >> n2 >> m2 >> n3;
    if(m1=='+'&&m2=='+') cout << n1+n2+n3;
    if(m1=='+'&&m2=='-') cout << n1+n2-n3;
    if(m1=='+'&&m2=='*') cout << n2*n3+n1;
    if(m1=='-'&&m2=='+') cout << n1-n2+n3;
    if(m1=='-'&&m2=='-') cout << n1-n2-n3;
    if(m1=='-'&&m2=='*') cout << n1-n2*n3;
    if(m1=='*'&&m2=='+') cout << n1*n2+n3;
    if(m1=='*'&&m2=='-') cout << n1*n2-n3;
    if(m1=='*'&&m2=='*') cout << n1*n2*n3;
    return 0;
}
