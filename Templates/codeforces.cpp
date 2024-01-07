//udontur's template
//https://github.com/udontur
//ACCEPTED? I bet on this code

#include <cctype>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory> 
#include <queue> 
#include <chrono>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <array>
#include <forward_list>
#include <initializer_list>
#include <unordered_map>
#include <unordered_set>
#define int long long
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define lb long double
#define ull unsigned long long
#define pi acos((lb)-1)
#define ef else if
#define es else
#define pii(x, y) pair<x, y>
#define vi(x) vector<x>
#define bgn(a) (a).begin()
#define end(a) (a).end()
#define rbgn(a) (a).rbegin()
#define rend(a) (a).rend()
#define size(a) (a).size()
#define all(a) bgn(a), end(a)
#define sz(x) int((x).size())
#define len(x) (x).length()
#define itr(x) (x)::iterator
#define rep(i, n) for(int i =0; i<n; i++)
#define repa(i, a, n) for(int i =(a); i<(n); i++)
#define repr(i, a, n) for(int i =(n); i>=(a); i--)
#pragma GCC optimize("O3")
#pragma GCC target ("avx2")
const int inf=1e18;
const int imx=9223372036854775807;
const int imn=-9223372036854775807;
const int mod=1e9+7;
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};
using namespace std;
template<class T>void xdup(vector<T> &v){sort(all(v));v.erase(unique(all(v)), end(v));}
struct cus{static uint64_t splitmix64(uint64_t x){
x+=0x9e3779b97f4a7c15;
x=(x^(x>>30))*0xbf58476d1ce4e5b9;
x=(x^(x>>27))*0x94d049bb133111eb;return x^(x>>31);}
size_t operator()(uint64_t x)const{
static const uint64_t fixrand=chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x+fixrand);}};
#define ump(x, y) unordered_map<x, y, cus>
int gcd(int a, int b){if(!a)return b;return(gcd(b%a, a));}
int lcm(int a, int b){return((a*b)/gcd(a, b));}
int fpow(int a, int b){int res=1;
while(b>0){if(b&1) res*=a;a*=a;b>>=1;
}return res;}int fpowmod(int a, int b, int mod){int res=1;
while(b>0){if(b&1) res=((res%mod)*(a%mod))%mod;
a=((a%mod)*(a%mod))%mod;b>>=1;
}return res%mod;}
vector<bool> sieve(int n){
vector<bool> a(n+1, 1);
a[0]=a[1]=0;for(int i =2; i<=n; i++)
if(a[i]&&(long long)i*i<=n)
for(int j=i*i; j<=n; j+=i)
a[j]=0;return a;}
void yes(){cout << "YES\n";}
void no(){cout << "NO\n";}

//udontur
//LETS GET CODING
//ADD OIL, BRO AC

void udontur(){
	
	return;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int tt=0; cin >> tt; while(tt--) 
	
	udontur();
    return 0;
    
}

/**********WA, TLE???***************
*array bounds, overflow, underflow *
*corner case (n=1? n=BRUH_HUGE_NUM)*
*redefine the problem              *
*do sth instead of nothing         *
*STAY ORGANIZED                    *
*WRITE STUFF DOWN                  *
*DON"T GET STUCK ON ONE APPROACH   *
***********************************/
