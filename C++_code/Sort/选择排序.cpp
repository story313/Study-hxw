#include <bits/stdc++.h>  
using namespace std;
void swap(int &a,int &b){
    int s=a;
    a=b;
    b=s;
}
void selectsort(vector<int>& a,const int &n) {
    if(a.empty()||a.size()<2){ 
        return;
    }
    for(int j=n-1;j>=0;j--){
        int max=0;
        for(int i=1;i<=j;i++){
            if(a[i]>a[max]){
                max=i;
            }
        }
        swap(a[j],a[max]);
    }
}
int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
