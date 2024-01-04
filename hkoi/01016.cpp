#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, v[100001], dp1[100001], dp2[100001], maxs=0, mins=0, sum=0;
    cin >> n;
    for(int i =1; i<=n; i++){
        cin >> v[i];
        sum+=v[i];
    }
    dp1[0]=0;
    for(int i =1; i<=n; i++){
        dp1[i]=max(dp1[i-1],0)+v[i];
        maxs=max(maxs, dp1[i]);
    }
    dp2[0]=0;
    for(int i =1; i<=n; i++){
        dp2[i]=min(dp2[i-1],0)+v[i];
        mins=min(mins, dp2[i]);
    }
    cout << max(maxs, sum-mins) << endl;
    return 0;
}
