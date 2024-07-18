void sel(vector<int>& a){
    int mn, n=a.size();
    for(int i =0; i<n-1; i++){
        mn=i;
        for(int j =i+1; j<n; j++)
            if(a[j]<a[mn])
                mn=j;
        if(mn!=i) swap(a[mn], a[i]);
    }
}