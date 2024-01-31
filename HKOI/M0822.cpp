#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[200001];
    for(int i =1; i<=n; i++) cin>>a[i];
    int l1=0, r1=0;
    int dp1[200001];
    dp1[0]=0;
    for(int i =1; i<=n; i++)
        dp1[i]=max(a[i], dp1[i-1]+a[i]);
    int mx1=0;
    for(int i =1; i<=n; i++)
        mx1=max(mx1, dp1[i]);
    for(int i =n; i>=1; i--){
        if(dp1[i]==mx1){
            r1=i;
            continue;
        }
        if(r1&&dp1[i]==a[i]){
            l1=i;
            break;
        }
    }
    int lr=0, rr=0;
    int dpr[200001];
    dpr[0]=0;
    for(int i =1; i<l1; i++)
        dpr[i]=max(a[i], dpr[i-1]+a[i]);
    int mxr=0;
    for(int i =1; i<l1; i++)
        mxr=max(mxr, dpr[i]);
    for(int i =l1-1; i>=1; i--){
        if(dpr[i]==mxr){
            rr=i;
            continue;
        }
        if(rr&&dpr[i]==a[i]){
            lr=i;
            break;
        }
    }
    int ll=0, rl=0;
    int dpl[200001];
    dpl[0]=0;
    for(int i =r1+1; i<=n; i++)
        dpl[i]=max(a[i], dpl[i-1]+a[i]);
    int mxl=0;
    for(int i =r1+1; i<=n; i++)
        mxl=max(mxl, dpl[i]);
    for(int i =n; i>=r1+1; i--){
        if(dpl[i]==mxl){
            rl=i;
            continue;
        }
        if(rl&&dpl[i]==a[i]){
            ll=i;
            break;
        }
    }
    int mn=(1<<31)-1, mnp;
    for(int i =l1; i<=r1; i++){
        if(a[i]<mn){
            mn=a[i];
            mnp=i;
        }
    }
    int mx1l=0, mx1r=0;
    for(int i =l1; i<=r1; i++){
        if(i==mnp) continue;
        if(i<mnp) mx1l+=a[i];
        else if(i>mnp) mx1r+=a[i];
    }
    cout<<max(mx1+max(mxr, mxl), mx1l+mx1r);
    return 0;
}
