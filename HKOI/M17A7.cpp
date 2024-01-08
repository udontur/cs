#include <bits/stdc++.h>
using namespace std;
int main(){
    int dot=0, dash=0;
    string x, dump2;
    getline(cin, dump2);
    getline(cin, x);
    int len=x.length();
    for(int i =0; i<len;i++){
        if(x[i]=='.') dot++;
        else if(x[i]=='-') dash++;
    }
    cout << dot*2-dash;
    return 0;
}
