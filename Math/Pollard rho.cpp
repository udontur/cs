int pollrho(int n){
    int x=2, y=2, d=1;
    while(d==1){
        x=(x*x+1)%n;
        y=(((y*y+1)%n)*((y*y+1)%n)+1)%n;
        d=gcd(abs(x-y), n);
        if(d==n) return pollrho(n);
    }
    return d;
}
