int main (){
    int n, q, a[100001], c[100001], l, r;
    cin >> n >> q;
    for(int i =1; i<=n; i++) cin>>a[i];
    for(int i =1; i<=n; i++) c[i]=c[i-1]+a[i];
    for(int i =0; i<q; i++){
        cin >> l >> r;
        cout << c[r]-c[l-1] << "\n";
    }
    return 0;
}
