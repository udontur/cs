#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    bool left=0;
    int arr[40]{0}, op, ans=0, num, count=1;
    int rightzero[10]{0, 2, 1, 2, 3, 2, 3, 4, 3, 4};
    int leftzero[10]{0, 1, 2, 3, 2, 3, 4, 3, 4, 5};
    int one[10]{1, 0, 1, 2, 1, 2, 3, 2, 3, 4};
    int two[10]{1, 1, 0, 1, 2, 1, 2, 3, 2, 3};
    int three[10]{2, 2, 1, 0, 3, 2, 1, 4, 3, 2};
    int four[10]{2, 1, 2, 3, 0, 1, 2, 1, 2, 3};
    int five[10]{2, 2, 1, 2, 1, 0, 1, 2, 1, 2};
    int six[10]{3, 3, 2, 1, 2, 1, 0, 3, 2, 1};
    int seven[10]{3, 2, 3, 4, 1, 2, 3, 0, 1, 2};
    int eight[10]{3, 3, 2, 3, 2, 1, 2, 1, 0, 1};
    int nine[10]{4, 4, 3, 2, 3, 2, 1, 2, 1, 0};
    cin >> input;
    op=input.length();
    arr[0]=5;
    for(int i =1; i<op+1; i++){
        if(input[i]=='0'&&input[i-1]=='0') continue;
        arr[count]=input[i-1]-'0';
        count++;
    }
    for(int i =0; i<count-1; i++){
        if(arr[i]==0&&(arr[i-1]==7||arr[i-1]==4||arr[i-1]==1)) left=0;
        else if(arr[i]==0&&(arr[i-1]==8||arr[i-1]==9||arr[i-1]==5||arr[i-1]==6||arr[i-1]==3||arr[i-1]==2)) left=1;
        if(!arr[i]){
            if (left) num=rightzero[arr[i+1]];
            else num=leftzero[arr[i+1]];
        }else if (arr[i]==1) num=one[arr[i+1]];
        else if (arr[i]==2) num=two[arr[i+1]];
        else if (arr[i]==3) num=three[arr[i+1]];
        else if (arr[i]==4) num=four[arr[i+1]];
        else if (arr[i]==5) num=five[arr[i+1]];
        else if (arr[i]==6) num=six[arr[i+1]];
        else if (arr[i]==7) num=seven[arr[i+1]];
        else if (arr[i]==8) num=eight[arr[i+1]];
        else if (arr[i]==9) num=nine[arr[i+1]];
        ans+=num;
    }
    cout << ans;
    return 0;
}
