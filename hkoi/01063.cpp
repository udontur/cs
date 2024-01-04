#include <bits/stdc++.h>
using namespace std;
int main() {
    int n1=0, n2=0;
    string s, s1, s2;
    cin >> s >> s1 >> s2;
    for(int i =0; i<6; i++){
        if(s[i]>s1[i]) n1+=s[i]-s1[i];
        else if(s[i]<=s1[i]) n1+=s1[i]-s[i];
        if(s[i]>s2[i]) n2+=s[i]-s2[i];
        else if(s[i]<=s2[i]) n2+=s2[i]-s[i];
    }
    if(n1<n2) cout << s1 << "\n";
    else if(n1>n2) cout << s2 << "\n";
    else if(n1==n2) cout << s1 << " " << s2 << "\n";
    return 0;
}
