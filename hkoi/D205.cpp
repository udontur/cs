#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    vector<int>a;
    cin >> n;
    m=sqrt(n);
    cout << n<<"=";
    for(int i =2; i<=m; i++){
        while(!(n%i)){
            a.push_back(i);
            n/=i;
        }
    }
    if(n>1) a.push_back(n);
    if(a.empty()) cout <<n;
    else{
        n=a.size();
        for(int i =0; i<n; i++){
            cout << a[i];
            if(i!=n-1) cout <<"*";
        }
    }
    return 0;
}
