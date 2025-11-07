#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=s.length(), o=0;
    cout << n << "\n";
    for(int i =0; i<n; i++)
        if(s[i]==' ')
            o++;
    cout << o+1;
}
