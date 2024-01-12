#include<bits/stdc++.h>
using namespace std;
int main(){
    int u;
    cin>>u;
    for(int i=0;u>i;i++){
        int t,h,m;
        string n;
        cin>>t>>n;
        h=floor(t/100);
        m-h*100;
        t=h*60+m;
        if(t>=240&&t<=719){cout<<"Good morning, "<<n<< "!\n";}
        else if(t>=720&&t<=1079){cout<<"Good afternoon, "<<n<<"!\n";}
        else{cout<<"Good evening, "<<n<<"!\n";}
    }
    return 0;
}
