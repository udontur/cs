#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a;
    for(int i =0; i<a; i++){
        cin>>b;
        if(b%2){
            cout<<b;
            return 0;
        }
    }
    cout<<"Goodest English";
    return 0;
}
