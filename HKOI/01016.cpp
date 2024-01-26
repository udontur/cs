#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a[100001], sum=0;
    cin >> n;
    for(int i =1; i<=n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    int dp1[100001], dp2[100001];
    dp1[0]=0, dp2[0]=0;
    for(int i =1; i<=n; i++)
        dp1[i]=max(dp1[i-1]+a[i], a[i]);
    int mx1=-(1<<31);
    for(int i =1; i<=n; i++)
        mx1=max(dp1[i], mx1);
    for(int i =1; i<=n; i++)
        dp2[i]=min(dp2[i-1]+a[i], a[i]);
    int mn2=(1<<31)-1;
    for(int i =1; i<=n; i++)
        mn2=min(dp2[i], mn2);
    cout<<max(mx1, sum-mn2);
    return 0;
}
