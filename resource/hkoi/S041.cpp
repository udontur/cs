#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[201]{0} , n, o=0, e=0;
    string s;
    cin >> n >>s;
    for(int i =0; i<n; i++) a[i]=s[i]-'0';
    for(int i =0; i<10; i++){
        o=e=0;
        a[n]=i;
        for(int j =0; j<n+1; j++){
            if(j%2!=0) o+=a[j];
            else e+=a[j];
        }
        if((o-e)%11==0){
            cout << i;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}
