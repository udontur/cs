#include <bits/stdc++.h>
using namespace std;
#ifdef __cplusplus
extern "C" {
#endif
char faceup(int C);
void play();
#ifdef __cplusplus
}
#endif

void play() {
    unordered_map<char, pair<int, int>> m;
    for(int i =1; i<=50; i+=2){
    	char c1=faceup(i);
    	char c2=faceup(i+1);
        if(!m.count(c1)) m[c1].first=i;
        else m[c1].second=i;
        if(!m.count(c2)) m[c2].first=i+1;
        else m[c2].second=i+1;
    }
    for(int i ='A'; i<='Y'; i++){
        char c1=faceup(m[i].first);
        char c2=faceup(m[i].second);
    }
    return;
}
