#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("rps.in", "r", stdin);
    freopen("rps.out", "w", stdout);
    int n, na, nb, a[1001], b[1001], ta=0, tb=0, ans1=0, ans2=0;
    cin >> n >> na >> nb;
    for(int i =0; i<na; i++) cin >> a[i];
    for(int i =0; i<nb; i++) cin >> b[i];
    for(int i =0; i<n; i++){
        int opa=a[ta];
        int opb=b[tb];
        if(opa==0&&opb==1) ans2++; 
        else if(opa==0&&opb==2) ans1++; 
        else if(opa==0&&opb==3) ans1++; 
        else if(opa==0&&opb==4) ans2++; 
        else if(opa==1&&opb==0) ans1++; 
        else if(opa==1&&opb==2) ans2++; 
        else if(opa==1&&opb==3) ans1++; 
        else if(opa==1&&opb==4) ans2++; 
        else if(opa==2&&opb==0) ans2++; 
        else if(opa==2&&opb==1) ans1++; 
        else if(opa==2&&opb==3) ans2++; 
        else if(opa==2&&opb==4) ans1++; 
        else if(opa==3&&opb==0) ans2++; 
        else if(opa==3&&opb==1) ans2++; 
        else if(opa==3&&opb==2) ans1++; 
        else if(opa==3&&opb==4) ans1++; 
        else if(opa==4&&opb==0) ans1++; 
        else if(opa==4&&opb==1) ans1++; 
        else if(opa==4&&opb==2) ans2++; 
        else if(opa==4&&opb==3) ans2++; 
        if(ta==na-1)ta=0;
        else ta++;
        if(tb==nb-1) tb=0;
        else tb++;
    }
    cout << ans1 << " " << ans2;
    return 0;
}
