#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("magic.in", "r", stdin);
    freopen("magic.out", "w", stdout);
    int n, arr[501][501], num=1, temp1, temp2;
    cin >> n;
    n--;
    arr[0][n/2]= num;
    temp1=0;
    temp2=n/2;
    num++;
    for(int i =1; i<((n+1)*(n+1)); i++){
        if(temp1==0&&temp2!=n){
            arr[n][temp2+1]=num;
            temp1=n;
            temp2=temp2 +1;
        }else if(temp1!=0&&temp2==n){
            arr[temp1-1][0]=num;
            temp1=temp1-1;
            temp2=0;
        }else if(temp1==0&&temp2==n){
            arr[temp1+1][temp2]=num;
            temp1=temp1+1;
            temp2=temp2;
        }else if(temp1!=0&&temp2!=n){
            if(arr[temp1-1][temp2+1]==0){
                arr[temp1-1][temp2+1]=num;
                temp1=temp1-1;
                temp2=temp2+1;
            }else{
                arr[temp1+1][temp2]=num;
                temp1=temp1+1;
                temp2=temp2;
            }
        }
        num++;
    }
    for(int i =0; i<n+1; i++){
        for(int j =0; j<n+1; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
