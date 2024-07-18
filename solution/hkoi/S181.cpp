#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c, d, a[1000001], s=0;
    cin >> n >> c >> d;
    for(int i =0; i<n; i++){
        cin >> a[i];
        s+=a[i];
    }
    if(s%2){
        cout << "-1\n";
        return 0;
    }
    int ans1=0, o=0, t=0;
    for(int i =0; i<n; i++){
        if(!(a[i]%2)&&t) o++;
        else if((a[i]%2)&&!t) t=1;
        else if((a[i]%2)&&t){
            o++;
            ans1+=o*min(c, d);
            t=0;
            o=0;
        }
    }
    int ans2=0, sti=0, stio=0;;
    for(int i =0; i<n; i++){
        if((a[i]%2)&&!sti){
            sti=1;
            continue;
        }
        if(!sti) stio++;
        if(!(a[i]%2)&&t) o++;
        else if((a[i]%2)&&!t) t=1;
        else if((a[i]%2)&&t){
            o++;
            ans2+=o*min(c, d);
            t=0;
            o=0;
        }
    }
    ans2+=(o+1+stio)*min(c, d);
    cout << min(ans1, ans2) << "\n";
    return 0;
}
