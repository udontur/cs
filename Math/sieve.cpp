#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n){
    vector <bool> a(n+1, 1);
    a[0]=a[1]=0;
    for(int i =2; i<=n; i++)
        if(a[i]&&(long long)i*i<=n)
            for(int j=i*i; j<=n; j+=i)
                a[j]=0;
    return a;
}
