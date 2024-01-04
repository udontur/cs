#include <iostream>
using namespace std;

int kad(int a[], int n){
    int mx=-1e9, tmp=0;
    for(int i =0; i<n; i++){
        if(tmp+a[i]>a[i]) tmp+=a[i];
        else tmp=a[i];
        if(tmp>mx) mx=tmp;
    }
    return mx;
}
