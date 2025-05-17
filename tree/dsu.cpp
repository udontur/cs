int n, totalSize;
int id[100001], sz[100001];
int find(int node) {
    int root=node;
    while(root!=id[root]) {
        root=id[root];
    }
    while(node!=id[node]) {
        int next=id[node];
        id[node]=root;
        node=next;
    }
    return root;
}
void unify(int a, int b) {
    a=find(a);
    b=find(b);
    if(a==b){
        return;
    }
    if(sz[a]>sz[b]){
        sz[b]+=sz[a];
        sz[a]=0;
        id[b]=id[a];
    }else{
        sz[a]+=sz[b];
        sz[b]=0;
        id[a]=id[b];
    }
    totalSize--;
}
