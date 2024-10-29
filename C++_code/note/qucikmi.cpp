#include <bits/stdc++.h>  
using namespace std;  
const int k = 998244353;
int Hxw(long long int n,long long int m){
    long long int r = 1;
    while(n){
        if(n&1){
            r = r*m % k;}
        m = m*m % k;
        n = n >> 1;
    }
    return r;
}
int main(){
    int x=Hxw(26,5);
    cout<<x<<endl;
    return 0;
}
