#include <bits/stdc++.h>
using namespace std;
int main() {
    int oct=0, dec=0, rem=0, i=1, j=0, ch;
    string check, octstr;
    cin >> check;
    if(check=="OCT"){
        cin >> oct;
        ch=oct%10;
        if(ch>=8){
            cout<<"No solution";
            return 0;
        }
        while(oct!=0){
            rem=oct%10;
            oct/=10;
            dec+=rem*pow(8, j);
            j++;
        }
        if(dec>31){
            cout << "No solution";
            return 0;
        }else if(dec>=1&&dec<=9){
            cout << "DEC 0" << dec;
            return 0;
        }else{
            cout << "DEC " << dec;
            return 0;
        }
    }else if(check=="DEC"){
        cin >> dec;
        while(dec!=0){
            rem=dec%8;
            dec/=8;
            oct+=rem*i;
            i*=10;
        }
        if(oct>31){
            cout << "No solution";
            return 0;
        }else if(oct>=1&&oct<=9){
            cout << "OCT 0" << oct;
            return 0;
        }else{
            cout << "OCT " << oct;
            return 0;
        }
    }
    return 0;
}
