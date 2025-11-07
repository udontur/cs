#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, a[10]{15,15,15,18,18,18,20,20,30,30}, ans=0, n;
    bool b[9]{0};
    string ice, sug, top, dum;
    cin >> k;
    ans+=a[k-1];
    cin>>ice;
    if(ice=="Less"){ans+=2; cin>>dum;}
    if(ice=="No"){ans+=3; cin>>dum;}
    cin >> sug;
    if(sug=="50%") ans+=1;
    if(sug=="30%") ans+=2;
    if(sug=="0%") ans+=4;
    cin >> n;
    for (int i =0; i<n; i++) {
        cin >> top;
        if(top=="Grass"||top=="Lychee"||top=="Coffee"||top=="Red") cin >> dum;
        if(top=="Crystal") cin >> dum >> dum;
        if((top=="Pearl"||top=="Pearl,")&&!b[0]){ans+=4; b[0]=1;}
        else if((top=="Pudding"||top=="Pudding,")&&!b[1]){ans+=4; b[1]=1;}
        else if((top=="Aloe"||top=="Aloe,")&&!b[2]){ans+=5; b[2]=1;}
        else if((top=="Agar"||top=="Agar,")&&!b[3]){ans+=5; b[3]=1;}
        else if(top=="Grass"&&!b[4]){ans+=6; b[4]=1;}
        else if(top=="Lychee"&&!b[5]){ans+=6; b[5]=1;}
        else if(top=="Coffee"&&!b[6]){ans+=6; b[6]=1;}
        else if(top=="Red"&&!b[7]){ans+=7; b[7]=1;}
        else if(top=="Crystal"&&!b[8]){ans+=7; b[8]=1;}
    }
    cout << ans << "\n";
    return 0;
}
