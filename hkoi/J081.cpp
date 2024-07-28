#include <bits/stdc++.h>
using namespace std;
int main (){
    int op, var, vararr[27]{0}, pos=-1, rnd =0, var2, len, ans, pt1int, pt2int;
    char simbol;
    string whole, pt1, pt2, dump;
    bool valid[27]{0};
    cin >> op;
    getline(cin, dump);
    for(int cnt =0; cnt<op; cnt++){
        rnd=0, ans=0, var=0, pos=-1, pt1int=0, pt2int=0;
        getline(cin, whole);
        var=whole[0] - 'A';
        valid[var]=true;
        whole.erase(0,2);
        len=whole.length();
        pt1="";
        pt2="";
        if(whole[0]=='-') rnd=1;
        if(rnd == 1) pt1+='-'; 
        for(int i =rnd; i<len; i++){
            if(whole[i]=='-'||whole[i]=='+') {
                simbol=whole[i];
                pos=i;
                break;
            }
            pt1+=whole[i];
        }
        if(pos == -1){
            if(isalpha(whole[0])){
                var2=whole[0] - 'A';
                vararr[var]=vararr[var2];
                
            }else{
                pt1=whole;
                vararr[var]=stoi(pt1);
            }   
        }else{
            for(int i =pos + 1; i<len; i++) pt2+=whole[i];
            if(isalpha(pt1[0])||isalpha(pt1[1])){
                if(isalpha(pt1[1])){
                    pt1.erase(0,1);
                    pt1int=vararr[pt1[0]-'A'];
                    pt1int*=-1;
                }else if(isalpha(pt1[0])) pt1int=vararr[pt1[0]-'A'];
            }else if(!isalpha(pt1[0])||!isalpha(pt1[1])){
                pt1int=stoi(pt1);
            }
            if(isalpha(pt2[0])||isalpha(pt2[1])){
                if(isalpha(pt2[1])){
                    pt2.erase(0,1);
                    pt2int=vararr[pt2[0]-'A'];
                    pt2int*=-1;
                }else if(isalpha(pt2[0])){
                    pt2int=vararr[pt2[0]-'A'];
                }
            }else if(!isalpha(pt2[0])||!isalpha(pt2[1])){
                pt2int=stoi(pt2);
            }
            if(simbol=='+') ans=pt1int + pt2int;
            if(simbol=='-') ans=pt1int - pt2int;
            vararr[var]=ans;
            
        }
    }
    for(int i =0; i< 26; i++){
        if(valid[i]){
            cout << char(i+'A')<< "=" <<vararr[i]<< endl;
        }
    }
    return 0;
}
