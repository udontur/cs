#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, car[10001], maxA=0, maxB=0;
    queue <int> road;
    cin >> n;
    for(int i =0; i< n;i++) cin >> car[i];
    for(int i =0; i<n; i++){
        if(car[i]>maxA){
            maxA=car[i];
            road.push(1);
        }else if(car[i]>maxB){
            maxB=car[i];
            road.push(2);
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for(int i =0; i<n;i++){
        cout << road.front() << " ";
        road.pop();
    }
    return 0;
}
