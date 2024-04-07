#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int n=s.length();
    for (int i =n-5; i>=0; i--) cout << s[i];
    cout << ".mp3";
    return 0;
}
