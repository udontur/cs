#include <bits/stdc++.h>
using namespace std;
int main (){
    long long n;
    cin >> n;
    int i=0;
    long long t=n;
    while(t>0){
        i++;
        t=t/2;
    }
    long long sum=0;
    long long m=n+1;
    for(int j=0;j<i;j++){
        long long tmp=pow(2,j);
        long long tmp2=pow(2,j+1);
        sum+=(m/tmp2)*tmp;
        if(m%tmp2>=tmp){
            sum+=m%tmp;
        }
    }
    cout << sum;
}
