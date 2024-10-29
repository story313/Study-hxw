#include <bits/stdc++.h>  
using namespace std;
#define il inline//加快调用函数速度，不适用于递归函数
#define ll long long
const int p = 998244353;
il int read() {
    int x = 0;
    char c = getchar();
    while(c < '0' || c > '9') c = getchar();
    while(c >= '0' && c <= '9') x = (x << 1) + (x << 3) + (c ^ 48), c = getchar();
    return x;}
il int factorial(int n) {    
    if (n == 0) {  return 1; }  
    return (ll)(n%p) * factorial(n - 1)%p; }  
int main(){
    ll a=6;
    a=factorial(a);
    printf("%lld", a);
    return 0;
}