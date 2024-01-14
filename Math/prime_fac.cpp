#include <iostream>
#include <vector>
using namespace std;

vector<int> prifac(int n){
    vector<int> a;
    int m=sqrt(n);
    for(int i =2; i<=m; i++){
        while(!(n%i)){
            a.push_back(i);
            n/=i;
        }
    }
    if(n>1||a.empty()) a.push_back(n);
    return a;
}
