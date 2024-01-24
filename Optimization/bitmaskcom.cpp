for(int i =0; i<(1<<n); i++){
	for(int j =0; j<n; j++){
		if(i&(1<<j)){
			cout<<j;
		}
	}
}
