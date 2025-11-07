#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long n, x=0, a=0, b=0, p=0;
    unordered_map<long long, long long> m;
    cin >> n;
    if(n==1){
        cout << "DROP\n";
        cout << 2 << "\n" <<2;
        return 0;
    }
    for(long long i =0; i<n; i++){
        cin>>x;
        m[x]=i;
        if(a<x) b=a, a=x, p=i;
    }
    if(abs(a-b)>1) cout << "ESCAPE\n" << n-1 << "\n" << 6*(p+1)-2 << "\n";
    else{
        long long ans=(p+1)*3-1, lvl=n-1, one=n, two=n-1, drop=0;
        while(lvl>=1){
            if((lvl-(n%2))%2){
                if(m[lvl]<m[one]&&m[lvl]>m[two]){
                    ans+=abs(m[one]-m[lvl])*3-1;
                    two=one;
                    one=lvl;
                }else{
                    ans+=abs(m[one]-m[two])*3-1;
                    swap(one, two);
                }
                drop=(m[one]+1)*3+1;
            }else{
                if(m[lvl]>m[one]&&m[lvl]<m[two]){
                    ans+=abs(m[one]-m[lvl])*3-1;
                    two=one;
                    one=lvl;
                }else{
                    ans+=abs(m[one]-m[two])*3-1;
                    swap(one, two);
                }
                drop=(m[one]+1)*3-1;
            }
            lvl--;
        }
        cout << "DROP\n" << drop<< "\n"<< ans;
    }
    return 0;
}
