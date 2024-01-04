#include<bits/stdc++.h>
using namespace std;
void rec(int n, string s[], int& size){
    if(n==1){
        s[0]='0', s[1]='1';
        size=2;
    }else{
        rec(n-1, s, size);
        int pre=size;
        for(int i =pre-1; i>=0; i--){
            s[size]=s[i];
            size++;
        }
        for(int i =0; i<pre; i++) s[i]+='0', s[i+pre]+='1';
    }
}
int main(){
    int n, size=0;
    string first;
    cin>>n>>first;
    string grey[1<<n];
    rec(n, grey, size);
    int ptr=-1;
    for(int i =0; i<size; i++){
        if(grey[i]==first){
            ptr=i;
            break;
        }
    }
    for(int i =ptr; i<size; i++) cout<<grey[i]<<"\n";
    for(int i =0; i<ptr; i++) cout<<grey[i]<<"\n";
    return 0;
}
