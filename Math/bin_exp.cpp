//recursive (slower)
long long fpow(long long a, long long b){
    if(b==0) return 1;
    long long res=fpow(a, b/2);
    if(b%2) return res*res*a;
    else return res*res;
}

//recursive with mod
long long fpow(long long a, long long b, long long mod){
    if(!b) return 1;
    long long res=fpow(a, b/2, mod);
    if(b%2) return ((res%mod)*(res%mod)*(a%mod))%mod;
    else return ((res%mod)*(res%mod))%mod;
}

//iterative (faster)
long long fpow(long long a, long long b){
    long long res=1;
    while(b>0){
        if(b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}

//iterative with mod
long long fpow(long long a, long long b, long long mod){
    long long res=1;
    while(b>0){
        if(b&1) res=((res%mod)*(a%mod))%mod;
        a=((a%mod)*(a%mod))%mod;
        b>>=1;
    }
    return res%mod;
}
