//no neg num
vector<int> cntsort(vector<int> a){
    int s=10001, c[s], n=a.size(), ptr=0;
    for(int i =0; i<s; i++) c[i]=0;
    for(int i =0; i<n; i++) c[a[i]]++;
    for(int i =0; i<s; i++)
        if(c[i]>=1)
            for(int j=0; j<c[i]; j++){
                a[ptr]=i;
                ptr++;
            }
	return a;
}
