#include <bits/stdc++.h>  
using namespace std; 
long long gcd(long long a, long long b) {  
    return b == 0 ? a : gcd(b, a % b); } 
int main(){
    int n;
    cin>>n;
    int zhou=0;
    int shu=0;
    int yuandian=0;
    vector<long long int> x(n), y(n);  
    set<pair<long long, long long>> paiwu;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        y[i]=y[i]*y[i];
        if(y[i]==0&&x[i]!=0){
            zhou=1;
        }
        if(y[i]!=0&&x[i]==0){
            shu=1;
        }
        if(y[i]==0&&x[i]==0){
            yuandian=1;
        }
        if(x[i]!=0&&y[i]!=0){
        long long dx = x[i];  
        long long dy = y[i];  
        long long g = gcd(dy, dx);  
        dy /=g;
        dx /=g;
        if (dx < 0) {  
            dx = -dx;  
            dy = -dy;  }  
        paiwu.insert({dy, dx});}
    }
    int sum =paiwu.size();
    if(zhou){
        sum++;}
    if(shu){
        sum++;}
    if(yuandian==1&&sum==0){
        sum++;}
    cout<<sum<<endl;
    return 0;
}