#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=s.length();
    for(int i =n-1; i>=0; i--) cout << s[i];
    for(int i =0; i<n; i++){
        if(s[i]!=s[n-i-1]){
            cout << "\nNo";
            return 0;
        }
    }
    cout << "\nYes";
    return 0;
}
