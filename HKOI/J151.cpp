#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int n, m;
    cin>>n>>m;
    int cnt=n/2-!(n%2);
    if(!(n%2)&&m==0) cnt++;
    for(int i =1; i<=cnt; i++){
        if(i==abs(m)){
            cnt++;
            continue;
        }
        cout<<i<<" "<<-i<<" ";
    }
    if(!(n%2)&&m!=0) cout<<"0 ";
    if(!(!(n%2)&&m==0))cout<<m;
	return 0;
}
