#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, w, o=0;
    string in;
    pair<string, int> a[300001];
    cin >> n >> w;
    while(cin >> in){
        a[o].first=in;
        a[o].second=in.length();
        o++;
    }
    n=o, o=0;
    for(int i =0; i<n; i++){
        int t=o+a[i].second;
        int add=a[i].second+1;
        if(t<w){
            cout << a[i].first << " ";
            o+=add;
        }else if(t>w){
            cout << "\n" << a[i].first << " ";
            o=add;
        }else{
            cout << a[i].first << "\n";
            o=0;
        }
    }
    return 0;
}
