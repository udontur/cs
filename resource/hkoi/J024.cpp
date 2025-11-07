#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a[30001]{0}, x, mx=0, mode=0;
    double mean=0, pt, pt1, pt2;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>a[i];
        mean+=a[i];
    }
    mean/=(double)n;
    cout<<fixed<<setprecision(3);
    cout<<mean<<"\n";
    cout<<fixed<<setprecision(0);
    sort(a, a+n);
    if(!(n%2)){
        pt1=a[(n/2)-1];
        pt2=a[n/2];
        pt=pt1+pt2;
        if(!((int)pt%2)) cout<<fixed<<setprecision(0)<<pt/2<<"\n";
        else cout<<fixed<<setprecision(1)<<pt/2.0<<"\n";
    }else cout<<a[n/2]<<"\n";
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++)
            if(a[i]==a[j])
                x++;
        if(x>mx) mx=x, mode=a[i];
        x=0;
    }
    cout<<mode<<"\n";
    return 0;
}
