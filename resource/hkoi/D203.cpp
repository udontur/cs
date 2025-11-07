#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    for(int i =1; i<=9; i++){
        if(!(i%n)) cout << "Clap ";
        else cout << i << " ";
    }
    for(int i =10; i<=99; i++){
        if(!(i%n)) cout << "Clap ";
        else if(i%10==n||i/10==n) cout << "Clap ";
        else cout << i << " ";
        if(!(i%10)) cout << "\n";
    }
    if(!(100%n)) cout << "Clap";
    else cout<< "100";
    return 0;
}
