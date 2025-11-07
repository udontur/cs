#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main (){
    int n, m, ai, pt=0;
    string a[50001], id;
    deque <pair<string, int>> s;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> id;
        s.push_back({id, 0});
    }
    while(n--){
        if(n==0){
            a[pt]=s.front().first;
            break;
        }else{
            string id1=s.front().first;
            int st1=s.front().second;
            s.pop_front();
            string id2=s.front().first;
            int st2=s.front().second;
            s.pop_front();
            if((id1.length()==12&&id2.length()==8&&st1<2)||(id1.length()==8&&id1[0]=='0'&&id2.length()==8&&id2[0]=='1'&&st1==0)){
                a[pt++]=id2;
                s.push_front({id1, ++st1});
            }else{
                a[pt++]=id1;
                s.push_front({id2, st2});
            }
        }
    }
    cin >> m;
    while(m--){
        cin >> ai;
        cout << a[ai-1] << " ";
    }
    return 0;
}
