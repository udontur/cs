#include <bits/stdc++.h>
using namespace std;
int cur=97, a[301][301];
int fpow(int a, int b);
void solve(int k, int lr, int lc, int r, int c){
    if(k==1){
        if(r%2&&c%2){
            a[r-1][c-1]=cur;
            a[r-1][c]=cur;
            a[r][c-1]=cur;
        }else if(!(r%2)&&c%2){
            a[r+1][c-1]=cur;
            a[r+1][c]=cur;
            a[r][c-1]=cur;
        }else if(r%2&&!(c%2)){
            a[r-1][c+1]=cur;
            a[r-1][c]=cur;
            a[r][c+1]=cur;
        }else if(!(r%2)&&!(c%2)){
            a[r+1][c+1]=cur;
            a[r+1][c]=cur;
            a[r][c+1]=cur;
        }
        cur++;
        cur%=122;
        if(cur==0) cur=97;
        return; 
    }
    if(r<lr+fpow(2, k-1)&&c>=lc+fpow(2, k-1)){
        a[lr+fpow(2, k-1)-1][lc+fpow(2, k-1)-1]=cur;
        a[lr+fpow(2, k-1)][lc+fpow(2, k-1)-1]=cur;
        a[lr+fpow(2, k-1)][lc+fpow(2, k-1)]=cur;
        cur++;
        cur%=122;
        if(cur==0) cur=97;
        solve(k-1, lr             , lc             , lr+fpow(2, k-1)-1, lc+fpow(2, k-1)-1);
        solve(k-1, lr+fpow(2, k-1), lc             , lr+fpow(2, k-1)  , lc+fpow(2, k-1)-1);
        solve(k-1, lr             , lc+fpow(2, k-1), r                , c                );
        solve(k-1, lr+fpow(2, k-1), lc+fpow(2, k-1), lr+fpow(2, k-1)  , lc+fpow(2, k-1)  );
    }else if(r>=lr+fpow(2, k-1)&&c>=lc+fpow(2, k-1)){
        a[lr+fpow(2, k-1)-1][lc+fpow(2, k-1)-1]=cur;
        a[lr+fpow(2, k-1)][lc+fpow(2, k-1)-1]=cur;
        a[lr+fpow(2, k-1)-1][lc+fpow(2, k-1)]=cur;
        cur++;
        cur%=122;
        if(cur==0) cur=97;
        solve(k-1, lr             , lc             , lr+fpow(2, k-1)-1, lc+fpow(2, k-1)-1);
        solve(k-1, lr+fpow(2, k-1), lc             , lr+fpow(2, k-1)  , lc+fpow(2, k-1)-1);
        solve(k-1, lr             , lc+fpow(2, k-1), lr+fpow(2, k-1)-1, lc+fpow(2, k-1)  );
        solve(k-1, lr+fpow(2, k-1), lc+fpow(2, k-1), r                , c                );
    }else if(r>=lr+fpow(2, k-1)&&c<lc+fpow(2, k-1)){
        a[lr+fpow(2, k-1)-1][lc+fpow(2, k-1)-1]=cur;
        a[lr+fpow(2, k-1)-1][lc+fpow(2, k-1)]=cur;
        a[lr+fpow(2, k-1)][lc+fpow(2, k-1)]=cur;
        cur++;
        cur%=122;
        if(cur==0) cur=97;
        solve(k-1, lr             , lc             , lr+fpow(2, k-1)-1, lc+fpow(2, k-1)-1);
        solve(k-1, lr+fpow(2, k-1), lc             , r                , c                );
        solve(k-1, lr             , lc+fpow(2, k-1), lr+fpow(2, k-1)-1, lc+fpow(2, k-1)  );
        solve(k-1, lr+fpow(2, k-1), lc+fpow(2, k-1), lr+fpow(2, k-1)  , lc+fpow(2, k-1)  );
    }else if(r<lr+fpow(2, k-1)&&c<lc+fpow(2, k-1)){
        a[lr+fpow(2, k-1)][lc+fpow(2, k-1)-1]=cur;
        a[lr+fpow(2, k-1)-1][lc+fpow(2, k-1)]=cur;
        a[lr+fpow(2, k-1)][lc+fpow(2, k-1)]=cur;
        cur++;
        cur%=122;
        if(cur==0) cur=97;
        solve(k-1, lr             , lc             , r                , c                );
        solve(k-1, lr+fpow(2, k-1), lc             , lr+fpow(2, k-1)  , lc+fpow(2, k-1)-1);
        solve(k-1, lr             , lc+fpow(2, k-1), lr+fpow(2, k-1)-1, lc+fpow(2, k-1)  );
        solve(k-1, lr+fpow(2, k-1), lc+fpow(2, k-1), lr+fpow(2, k-1)  , lc+fpow(2, k-1)  );
    }
    return;
}
int main(){
    int k, r, c;
    cin>>k>>r>>c;
    int p=fpow(2, k);
    r--, c--;
    solve(k, 0, 0, r, c);
    for(int i =0; i<p; i++){
        for(int j =0; j<p; j++){
            if(i==r&&j==c) cout<<"*";
            else cout<<(char)a[i][j];
        }
        cout<<"\n";
    }
}
int fpow(int a, int b){
    int res=1;
    while(b>0){
        if(b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}
