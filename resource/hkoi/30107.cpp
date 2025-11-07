#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<long long int> bpq;
    priority_queue<long long int, vector<long long int>, greater<long long int>> spq;
    int med=-1, num, cnt=1;
    while(cin >> num){
        if(cnt){
            cout << num << endl;
            bpq.push(num);
            med=num;
            cnt=0;
            continue;
        }
        if(num<=med) bpq.push(num);
        else spq.push(num);
        if(bpq.size()>spq.size()+1){
            spq.push(bpq.top());
            bpq.pop();
        }else if(spq.size()>bpq.size()+1){
            bpq.push(spq.top());
            spq.pop();
        }
        if(bpq.size()==spq.size()) med=(bpq.top()+spq.top())/2;
        else if(bpq.size()>spq.size()) med=bpq.top();
        else med=spq.top();
        cout << med << endl;
    }
    return 0;
}
