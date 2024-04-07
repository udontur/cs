#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t ;
    cin >> t ;
    for ( int i = 0 ; i < t ; i++ ) 
    {
        string s ;
        int o = 0 ;
        bool b = 0 ;
        cin >> s ;
        for ( int j = 0 ; j < s.length () ; j++ ) 
        {
            if ( s [ j ] == '1' ) 
            {
                if ( o > 0 ) 
                {
                    cout << o ;
                    o = 0 ;
                }
                if ( b == 1 ) 
                {
                    cout << "50" ;
                    b = 0 ;
                }
                cout << "1" ;
            } 
            else if ( s [ j ] == 'I' ) 
            {
                if ( b == 1 ) 
                {
                    cout << "5" ;
                    b = 0 ;
                }
                o++ ;
            } 
            else if ( s [ j ] == 'l' ) 
            {
                if (o > 0) 
                {
                    cout << o ;
                    o = 0 ;
                }
                b = 1 ;
            }
        }
        if (o > 0) 
        {
            cout << o ;
        }
        if (b == 1) 
        {
            cout << "50" ;
            b = 0 ;
        }
        cout << endl ;
    }
    return 0 ;
}
