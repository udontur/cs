#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){return (a <= b);}
int main() {
    long long cy, ma, ye, bk, re, gr, bl, ans, op[9], n1, ans1, ans2;
    long double n;
    string s;
    cin >> cy >> ma >> ye >> bk >> re >> gr >> bl >> n >> s;
    n1=n;
    if(s=="cyan") ans=cy*n;
    else if(s=="magenta") ans=ma*n;
    else if(s=="yellow") ans=ye*n;
    else if(s=="red"){
        if(n1%2==0){
            op[0]=re*n;
            op[1]=(ma*ceil(n/2))+(ye*ceil(n/2));
            ans=min(op[0], op[1], cmp);
        }else if(n1%2==1){
            op[0]= re*n;
            op[1]=min(re, ma+ye)+min((n-1)*re, (n-1)/2*(ma+ye));
            ans=min(op[0], op[1], cmp);
        }
    }else if(s=="green"){
        if(n1%2==0){
            op[0]=gr*n;
            op[1]=(cy*ceil(n/2))+(ye*ceil(n/2));
            ans=min(op[0], op[1], cmp);
        }else if(n1%2==1){
            op[0]=gr*n;
            op[1]=min(gr, cy+ye)+min((n-1)*gr, (n-1)/2*(cy+ye));
            ans=min(op[0], op[1], cmp);
        }
    }else if(s=="blue"){
        if(n1%2==0){
            op[0]=bl*n;
            op[1]=(cy*ceil(n/2))+(ma*ceil(n/2));
            ans=min(op[0], op[1], cmp);
        }else if(n1%2==1){
            op[0]=bl*n;
            op[1]=min(bl, cy+ma)+min((n-1)*bl, (n-1)/2*(cy+ma));
            ans=min(op[0], op[1], cmp);
        }
    }else if(s=="black"&&n1%3==0){
        op[0]=(n/3)*(cy+ma+ye);
        op[1]=(n/3)*(re+gr+bl);
        op[2]=(n/3)*(cy+2*re);
        op[3]=(n/3)*(ma+2*gr);
        op[4]=(n/3)*(ye+2*bl);
        op[5]=bk*n;
        ans=min(op[0], op[1]);
        for(int i =1; i<6; i++)
            ans=min(ans, op[i]);
    }else if(s=="black"&&n1%3==2){
        op[0]=((n-2)/3)*(cy+ma+ye);
        op[1]=((n-2)/3)*(re+gr+bl);
        op[2]=((n-2)/3)*(cy+2*re);
        op[3]=(n-2)/3*(ma+2*gr);
        op[4]=(n-2)/3*(ye+2*bl);
        op[5]=bk*(n-2);
        ans1=min(op[0], op[1]);
        for(int i =1; i<6; i++)
            ans1=min(ans1, op[i]);
        op[0]=cy+ma+ye;
        op[1]=re+gr+bl;
        op[2]=cy+2*re;
        op[3]=ma+2*gr;
        op[4]=ye+2*bl;
        op[5]=bk*2;
        ans2=min(op[0], op[1]);
        for(int i =1; i<6; i++)
            ans2=min(ans2, op[i]);
        ans=ans1+ans2;
    }else if(s=="black"&&n1%3==1){
        op[0]=((n-1)/3)*(cy+ma+ye);
        op[1]=((n-1)/3)*(re+gr+bl);
        op[2]=((n-1)/3)*(cy+2*re);
        op[3]=(n-1)/3*(ma+2*gr);
        op[4]=(n-1)/3*(ye+2*bl);
        op[5]=bk*(n-1);
        ans1=min(op[0], op[1]);
        for(int i =1; i<6; i++)
            ans1=min(ans1, op[i]);
        op[0]=cy+ma+ye;
        op[1]=re+gr+bl;
        op[2]=cy+2*re;
        op[3]=ma+2*gr;
        op[4]=ye+2*bl;
        op[5]=bk;
        ans2=min(op[0], op[1]);
        for(int i =1; i<6; i++) 
            ans2=min(ans2, op[i]);
        ans=ans1+ans2;
    }
    cout << ans;
    return 0;
}
