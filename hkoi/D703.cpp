#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cur, ele[10001], ptr[10001];
    cin>>n>>cur;
    for(int i =1; i<=n; i++) cin>>ele[i];
    for(int i =1; i<=n; i++) cin>>ptr[i];
    if(!cur){
        cout<<"End";
        return 0;
    }
    for(int i =0; i<n; i++){
        cout<<ele[cur]<<"\n";
        if(!ptr[cur]){
            cout<<"End";
            return 0;
        }
        cur=ptr[cur];
    }
    return 0;
}
