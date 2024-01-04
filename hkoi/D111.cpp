#include <bits/stdc++.h>
using namespace std;
int main(){
    long double w, h;
    cin >> w >> h;
    long double bmi=w/(h*h);
    cout << fixed << setprecision(3);
    cout << bmi << "\n";
    if(bmi<18.5) cout << "Underweight";
    else if(18.5<=bmi&&bmi<23.0) cout << "Normal";
    else if(23.0<=bmi&&bmi<25.0) cout << "Overweight";
    else cout << "Obese";
    return 0;
}
