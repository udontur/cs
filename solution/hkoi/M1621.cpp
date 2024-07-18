#include <bits/stdc++.h>
using namespace std;
int n, l;
vector<int> a(100001);
bool is(){
    for(int i =0; i<n-1; i++)
        if(a[i]>a[i+1])
            return 0;
    return 1;
}
bool ao(){
    for(int i =0; i<n; i++)
        if(a[i]!=1)
            return 0;
    return 1;
}
int main(){
    cin >> n >> l;
    for(int i =0; i<n; i++) cin >>a[i];
    if(n==l){
        if(is()) cout << "No solution";
        else for(int i =0; i<n; i++) cout <<a[i] << " ";
    }else if(ao()){
        for(int i =0; i<l-2; i++) cout << "1 ";
        cout << "2 1";
    }else{
        if(is()){
            int ptr=0;
            while(a[ptr]==1) ptr++;
            ptr++;
            vector <int> out;
            for(int i =0; i<l-n-1; i++) out.push_back(1);
            for(int i =0; i<n+1; i++){
                if(i==ptr) out.push_back(1);
                out.push_back(a[i]);
            }
            for(int i =0; i<l; i++) cout << out[i] << " ";
        }else{
            for(int i =0; i<l-n; i++) cout << "1 ";
            for(int i =0; i<n; i++) cout << a[i] << " ";
        }
    }
    
    return 0;
}
