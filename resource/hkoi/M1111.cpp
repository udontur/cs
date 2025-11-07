#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<"\n";
    sort(s.begin(), s.end());
    if(s[0]=='0'){
        int n=s.length();
        for(int i =1; i<n; i++){
            if(s[i]!='0'){
                swap(s[0], s[i]);
                break;
            }
        }
    }
    cout<<s;
    return 0;
}
