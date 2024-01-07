#include <bits/stdc++.h>
using namespace std;
vector<string> gen(char c){
    vector<string> ans;
    if(c=='A'){
        ans.push_back("A");
        return ans;
    }
    string t=string(1, c);
    ans.push_back(t);
    for(int i =0; i<c-'A'; i++)
        if((i+1)*5<=4*(c-'A'+1))
            for(string s: gen((char)(i+'A')))
                ans.push_back(s+c);
    return ans;
}
int main(){
    char c;
    cin>>c;
    vector<string> ans=gen(c);
    sort(ans.begin(), ans.end());
    for(string s: ans)
        if(s.length()>=2)
            cout<<s<<"\n";
    return 0;
}
