#include <bits/stdc++.h>
using namespace std;
int u;
bool f(int l,int r){
  return l<=u&&u<=r;
}
string check(){
  if(f(6,9)){
    return "PR";
  }
  if(f(10,27)){
    return "MA";
  }
  if(f(28,29)){
    return "RI";
  }
  if(f(30,38)){
    return "NH";
  }
  if(f(39,49)){
    return "ME";
  }
  if(f(50,59)){
    return "VT";
  }
  if(f(60,69)){
    return "CT";
  }
  if(f(70,89)){
    return "NJ";
  }
  if(f(100,149)){
    return "NY";
  }
  if(f(150,196)){
    return "PA";
  }
  if(f(197,199)){
    return "DE";
  }
  if(f(200,205)){
    return "DC";
  }
  if(f(206,219)){
    return "MD";
  }
  if(f(220,246)){
    return "VA";
  }
  if(f(247,268)){
    return "WV";
  }
  if(f(270,289)){
    return "NC";
  }
  if(f(290,299)){
    return "SC";
  }
  if(f(300,319)){
    return "GA";
  }
  if(f(320,349)){
    return "FL";
  }
  if(f(350,369)){
    return "AL";
  }
  if(f(370,385)){
    return "TN";
  }
  if(f(386,397)){
    return "MS";
  }
  if(f(398,399)){
    return "GA";
  }
  if(f(400,427)){
    return "KY";
  }
  if(f(430,459)){
    return "OH";
  }
  if(f(460,479)){
    return "IN";
  }
  if(f(480,499)){
    return "MI";
  }
  if(f(500,528)){
    return "IA";
  }
  if(f(530,549)){
    return "WI";
  }
  if(f(550,567)){
    return "MN";
  }
  if(f(570,577)){
    return "SD";
  }
  if(f(580,588)){
    return "ND";
  }
  if(f(590,599)){
    return "MT";
  }
  if(f(600,629)){
    return "IL";
  }
  if(f(630,658)){
    return "MO";
  }
  if(f(660,679)){
    return "KS";
  }
  if(f(680,693)){
    return "NE";
  }
  if(f(700,714)){
    return "LA";
  }
  if(f(716,729)){
    return "AR";
  }
  if(f(730,749)){
    return "OK";
  }
  if(f(750,799)){
    return "TX";
  }
  if(f(800,816)){
    return "CO";
  }
  if(f(820,831)){
    return "WY";
  }
  if(f(832,838)){
    return "ID";
  }
  if(f(840,847)){
    return "UT";
  }
  if(f(850,865)){
    return "AZ";
  }
  if(f(870,884)){
    return "NM";
  }
  if(f(889,898)){
    return "NV";
  }
  if(f(900,961)){
    return "CA";
  }
  if(f(967,968)){
    return "HI";
  }
  if(f(969,969)){
    return "GU";
  }
  if(f(970,979)){
    return "OR";
  }
  if(f(980,994)){
    return "WA";
  }
  if(f(995,999)){
    return "AK";
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for(int i=0;i<t;i++){
    string n;
    cin >> n;
    u=((int)n[0]-(int)'0')*100+((int)n[1]-(int)'0')*10+((int)n[2]-(int)'0');
    cout << check() << endl;
  }
}
