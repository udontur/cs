#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, in, sz=0;
    bool side=1;
    deque<int> out;
    stack<int> str;
    cin >> k;
    while(cin>>in){
        if(in==0) break;
        if(in==-1){
            if(side){
                cout<<out.front()<<"\n";
                out.pop_front();
            }else{
                cout<<out.back()<<"\n";
                out.pop_back();
            }
            if(!str.empty()){
                if(side) out.push_back(str.top());
                else out.push_front(str.top());
                str.pop();
            }else sz--;
        }else if(in==-2) side=!side;
        else{
            if(side) out.push_front(in);
            else out.push_back(in);
            if(++sz>k){
                int tmp=-1;
                if(side){
                    tmp=out.back();
                    out.pop_back();
                }else{
                    tmp=out.front();
                    out.pop_front();
                }
                str.push(tmp);
                sz--;
            }
        }
    }
    return 0;
}
