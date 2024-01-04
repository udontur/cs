#include <iostream>
#include <vector>
using namespace std;

vector<int>ffac(int n){
    int x=sqrt(n);
    vector<int> ans;
    for(int i =1; i<=x; i++)
        if(!(n%i))
            ans.push_back(i);
    if(x*x==n) x--;
    for(int i =x; i>=1; i--)
        if(!(n%i))
            ans.push_back(n/i);
    return ans;
}
