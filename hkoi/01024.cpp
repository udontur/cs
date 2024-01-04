#include <bits/stdc++.h>
using namespace std;
int main () {
    string a, b, ans="";
    int sum, num=0;
    cin >> a >> b;
    if(a.length()>b.length()){
      swap(a, b);
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(int i =0; i<a.length(); i++){
      sum = (a[i]-'0')+(b[i]-'0')+num;
      ans.push_back(sum%10+'0');
      num = sum/10;
    }
    for (int i=a.length(); i<b.length(); i++){
      sum = (b[i]-'0')+num;
      ans.push_back(sum%10 + '0');
      num = sum/10;
    }
    if(num){
      ans.push_back(num+'0');
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
