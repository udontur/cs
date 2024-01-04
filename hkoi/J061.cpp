#include <bits/stdc++.h>
using namespace std;
int leap (int month){
    if(month==0) return 31;
    else if(month==1) return 29;
    else if(month==2) return 31;
    else if(month==3) return 30;
    else if(month==4) return 31;
    else if(month==5) return 30;
    else if(month==6) return 31;
    else if(month==7) return 31;
    else if(month==8) return 30;
    else if(month==9) return 31;
    else if(month==10) return 30;
    else if(month==11) return 31;
}
int nonleap (int month){
    if(month==0) return 31;
    else if(month==1) return 28;
    else if(month==2) return 31;
    else if(month==3) return 30;
    else if(month==4) return 31;
    else if(month==5) return 30;
    else if(month==6) return 31;
    else if(month==7) return 31;
    else if(month==8) return 30;
    else if(month==9) return 31;
    else if(month==10) return 30;
    else if(month==11) return 31;
}
int main() {
    int date=0, year=0, month=0, day=0;
    string monthstr, monthlist[12]{"Jan", "Feb", "Mar", "Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    cin >> date >> monthstr >> year >> day;
    for(int i =0; i<12; i++){
        if(monthstr==monthlist[i]){
            month=i;
            break;
        }
    }
    while(day!=0){
        if (year%400==0||(year%4==0&&year%100!=0)){
            day--;
            date++;
            if(date>leap(month)){
                date-=leap(month);
                month++;
            }
            if(month>11){
                month-=12;
                year++;
            } 
        }else{
            day--;
            date++;
            if(date>nonleap(month)){
                date-=nonleap(month);
                month++;
            }
            if(month>11){
                month-=12;
                year++;
            } 
        }
    }
    cout << date << " " << monthlist[month] << " " << year;
    return 0;
}
