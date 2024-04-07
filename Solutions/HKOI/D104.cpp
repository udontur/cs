#include <bits/stdc++.h>
using namespace std;
int main(){
    long double a, b, c;
    cin >> a >>b>>c;
    long double dlt=b*b-4*a*c;
    cout << fixed<<setprecision(3);
    if(dlt<0) cout <<"None";
    else if(dlt==0) cout<<-b/(2.0*a);
    else{
        cout<<min((-b+sqrt(dlt))/(2.0*a), (-b-sqrt(dlt))/(2.0*a)) <<" ";
        cout<<max((-b+sqrt(dlt))/(2.0*a), (-b-sqrt(dlt))/(2.0*a));
    }
    return 0;
}
