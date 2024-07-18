#include <bits/stdc++.h>
using namespace std;
int main(){
    int d, intm, lim;
    string m;
    cin >> m >> d;
    if(m=="JAN"){
        intm=1;
        lim=31;
    }else if(m=="FEB"){
        intm=2;
        lim=29;
    }else if(m=="MAR"){
        intm=3 ;
        lim=31 ;
    }else  if(m=="APR"){
        intm=4;
        lim=30;
    }else if(m=="MAY"){
        intm=5 ;
        lim=31;
    }else if(m=="JUN"){
        intm=6 ;
        lim=30;
    }else if(m=="JUL"){
        intm=7 ;
        lim=31;
    }else if(m=="AUG"){
        intm=8 ;
        lim=31;
    }else if(m=="SEP"){
        intm=9 ;
        lim=30 ;
    }else if(m=="OCT"){
        intm=10 ;
        lim=31 ;
    }else if(m=="NOV"){
        intm=11 ;
        lim=30 ;
    }else if(m=="DEC"){
        intm=12;
        lim=31 ;
    }
    d+=14;
    if(d>lim){
        d-=lim;
        intm+=1;
    }
    if(intm>12) intm-=12;
    if(intm==1) m="JAN";
    else if(intm==2) m="FEB";
    else if(intm==3) m="MAR";
    else if(intm==4) m="APR";
    else if(intm==5) m="MAY";
    else if(intm==6) m="JUN";
    else if(intm==7) m="JUL";
    else if(intm==8) m="AUG";
    else if(intm==9) m="SEP";
    else if(intm==10) m="OCT";
    else if(intm==11) m="NOV";
    else if(intm==12) m="DEC";
    cout << m <<" "<< d;
    return 0;
}
