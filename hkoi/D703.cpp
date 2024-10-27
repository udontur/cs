#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, pt;
    cin>>n>>pt;
    if(pt==0){
        cout<<"End\n";
        return 0;
    }
    int a[100001][2];
    for(int i =1; i<=n; i++) cin>>a[i][0];
    for(int i =1; i<=n; i++) cin>>a[i][1];
    while(a[pt][1]!=0){
        cout<<a[pt][0]<<"\n";
        pt=a[pt][1];
    }
    cout<<a[pt][0]<<"\n";
    cout<<"End\n";
    return 0;
}
