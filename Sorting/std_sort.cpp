bool cmp(int a, int b){return a>b;}
int main(){
    sort(a, a+n); //for array that have n elements, make sure to adjust it according to it's base
    sort(v.begin(), v.end()); //for other that require .begin and .end
    sort(a, a+n, cmp); //compare function to edit it's comparision
    sort(a, a+n, greater<int>()); //sort int descending order
}
