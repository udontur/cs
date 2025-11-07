#include <bits/stdc++.h>
using namespace std;
bool islp(int year){return (((year%4==0)&&(year%100!=0))||(year%400==0));}
bool ok(int num){
    int y=num/10000;
    int m=(num/100)%100;
    int d=num%100; 
    if(m<1||m>12) return 0;
    if(d<1||d>31) return 0;
    if(m==2){
        if(islp(y)) return(d<=29);
        else return(d<=28);
    }
    if(m==4||m==6||m==9||m==11) return(d<=30);
    return 1;
}
bool pal(int num){
    if(num%10==num/10000000)
        if((num%100)/10==(num/1000000)%10)
            if((num%1000)/100==(num/100000)%10)
                if((num%10000)/1000==(num/10000)%10)
                    return 1;
    return 0;
}
int main() {
    freopen("date.in", "r", stdin);
    freopen("date.out", "w", stdout);
    int str, end, cnt, ans=0, month, day, year ;
    cin >> str >> end;
    cnt=str;
    for(int i =str; i<=end; i++)
        if(pal(i)&&ok(i)) 
            ans++;
    cout << ans << "\n";
    return 0;
}
