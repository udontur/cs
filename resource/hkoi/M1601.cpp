#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, o=1;
    cin>>n;
    for(int i =2000; i<n; i++){
        if((!(i%4)&&i%100!=0)||(!(i%400))) o+=2;
        else o++;
    }
    if(o%7==1) cout<<"Monday";
    else if(o%7==2) cout<<"Tuesday";
    else if(o%7==3) cout<<"Wednesday";
    else if(o%7==4) cout<<"Thursday";
    else if(o%7==5) cout<<"Friday";
    else if(o%7==6) cout<<"Saturday";
    else cout<<"Sunday";
    return 0;
}
