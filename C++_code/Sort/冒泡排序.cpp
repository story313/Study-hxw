#include <bits/stdc++.h>  
using namespace std;
void swap(int &a,int &b){
    int s=a;
    a=b;
    b=s;
}
void bobasort(vector<int>& a,int &n) {
    if(a.empty()||a.size()<2){ 
        return;
    }
    for(int i=0;i<n-1;i++){
        bool isswap=false;
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
                isswap=true;
            }
        }
        if(isswap==false){
            return;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bobasort(a,n);
    for(auto res:a){
        cout<<res<<" ";
    }
    return 0;
}