#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n==1){
        int w2, w4, x, k2 =0, k4=0, ans=0;                  
        cin >> w2 >> w4 >> x;
        if(w2*2>w4){
            while(x>=4){
                x-=4;
                k4++;
            }
            if(x==3) k4++;
            else if(x==2||x==1)k2++;
            ans=(k4*w4)+(k2*w2);
            cout << ans;
        }else{
            while(x>=2){
                x-=2;
                k2++;
            }
            if(x==1)k2++;
            ans=(k4*w4)+(k2*w2);
            cout << ans; 
        }
    }else if(n==2){
        int maxv, w2, w4, k=0;
        cin >> w2 >> w4 >> maxv;
        if(w2*2>w4){
            while(maxv>=w4){
                maxv-=w4;
                k+=4;
            }
            while(maxv>=w2){
                maxv-=w2;
                k+=2;
            }
            cout << k;
        }else{
            while(maxv>=w2){
                maxv-=w2;
                k+=2;
            }
            cout << k; 
        }
    }else if(n==3){
        int w4, w6, w9, ans=INT_MAX, x, pr;
        cin >> w4 >> w6 >> w9 >> x;
        for(int i =0; i<=x/9+1; i++){
            for(int j =0; j<=x/6+1; j++){
                for(int k =0; k<=x/4+1; k++){
                    pr=(k*w4)+(j*w6)+(i*w9);
                    if((4*k)+(6*j)+(9*i)>=x){
                        ans=min(ans, pr);
                    }
                }
            }
        }
        cout << ans;
    }else if(n==4){
        int y, n4, n6, n9, ans=0;
        cin >> n4 >> n6 >> n9 >> y;
        for(int i =0; i<=floor(y/n4); i++){
            for(int j=0; j<=floor((y-i*n4)/n6);j++){
                int k=floor((y-i*n4-j*n6)/n9);
                k=max(0, k);
                if((i*n4+j*n6+k*n9)<=y) ans=max(ans, i*4+j*6+k*9);
            }
        }
        cout << ans;
    }
    return 0;
}
