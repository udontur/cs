int par[100001], spd[100001];
void mak(int x){
    par[x]=x;
    spd[x]=1;
}
int fnd(int x){
    if(par[x]==x) return x;
    else return par[x]=fnd(par[x]);
}
void uni(int x, int y){
    x=fnd(x);
    y=fnd(y);
    if(x!=y){
        if(spd[x]<spd[y]) swap(x, y);
        par[y]=x;
        spd[x]+=spd[y];
    }
}
int main(){
    /*
    mak(x);
    fnd(x);
    uni(x, y);
    */
    return 0;
}

//can change line 19 compare function
