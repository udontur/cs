#include <bits/stdc++.h>
using namespace std;
vector<int> a(101);
bool que(int a, int b){
    cout<<"Q "<<a+1<<" "<<b+1<<endl;
    fflush(stdout);
    int ans;
    cin>>ans;
    return ans;
}
void dive(int l, int r){
    if(r-l==0) return;
    else if(r-l==1){
        bool ans=que(a[l], a[r]);
        if(!ans) swap(a[l], a[r]);
        return;
    }
    int m=(l+r)/2;
    dive(l, m);
    dive(m+1, r);
    return;
}
int main(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++) a[i]=i;
    dive(0, n-1-(n%2));
    int mx=a[0];
    for(int i =2; i<n; i+=2){
        bool ans=que(mx, a[i]);
        if(!ans) mx=a[i];
    }
    int mn=a[1];
    for(int i =3; i<n-(n%2); i+=2){
        bool ans=que(mn, a[i]);
        if(ans) mn=a[i];
    }
    if(n%2){
        bool ans1=que(mx, a[n-1]), nxt=0;
        if(!ans1){
            mx=a[n-1];
            nxt=1;
        }
        if(!nxt){
        	bool ans2=que(mn, a[n-1]);
        	if(ans2) mn=a[n-1];
		}
    }
    cout<<"A "<<mx+1<<" "<<mn+1<<endl;
    return 0;
}
