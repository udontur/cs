#include <bits/stdc++.h>
using namespace std;
long long f(long long num){
   long long count=0;
   for (long long i=5; num/i>=1; i*=5){
      count += num / i;
   }
   return count;
}
int main(){
    long long n, num;
    cin >> n;
    for(long long i =0; i<n; i++){
        cin >> num;
        cout << f(num) << "\n";
    }
    return 0;
}
