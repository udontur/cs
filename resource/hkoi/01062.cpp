#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n1=s1.length(), n2=s2.length();
    string st1=s1, st2=s2;
    int n;
    (n1>=n2)?n=n1:n=n2;
    for(int i =0; i<n1; i++) {
        if((s1[i]<'a'&&s1[i]>'Z')||s1[i]<'A'||s1[i]>'z'){
            s1[i]=0;
            continue;
        }
        s1[i]=tolower(s1[i]);
    }
    for(int i =0; i<n2; i++) {
        if((s2[i]<'a'&&s2[i]>'Z')||s2[i]<'A'||s2[i]>'z'){
            s2[i]=0;
            continue;
        }
        s2[i]=tolower(s2[i]);
    }
    for(int i =0; i<n; i++){
        if(s1[i]>s2[i]){
            cout << st1 << " is greater than " << st2;
            return 0;
        }else if(s1[i]<s2[i]){
            cout << st1 << " is less than " << st2;
            return 0;
        }
    }
    cout << st1 << " is equal to " << st2;
    return 0;
}
