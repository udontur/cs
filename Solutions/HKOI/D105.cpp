#include <bits/stdc++.h>
using namespace std;
int main(){
    int y1, y2, m1, m2, d1, d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    int dt1=y1*10000+m1*100+d1;
    int dt2=y2*10000+m2*100+d2;
    if(dt1>dt2) cout << "After";
    else if(dt1<dt2) cout <<"Before";
    else cout << "Same";
    return 0;
}
