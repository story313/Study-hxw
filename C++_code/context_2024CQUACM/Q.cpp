#include <bits/stdc++.h>  
using namespace std;
const int p=998244353;
int read() {//这题我写的挺好的
  int x = 0, w = 1;
  char ch = 0;
  while (ch < '0' || ch > '9') { 
    if (ch == '-') w = -1;        
    ch = getchar();}
  while (ch >= '0' && ch <= '9') {  
    x = x * 10 + (ch - '0'); 
    ch = getchar();}
  return x * w;}
void chengfa(int &a11, int &a12, int &a21, int &a22, int b11, int b12, int b21, int b22) {  
    int c11 = ((1LL*a11*b11)%p+(1LL*a12*b21)%p) % p;  
    int c12 = ((1LL*a11*b12)%p+(1LL*a12*b22)%p) % p;  
    int c21 = ((1LL*a21*b11)%p+(1LL*a22*b21)%p) % p;  
    int c22 = ((1LL*a21*b12)%p+(1LL*a22*b22)%p) % p;  
    a11 = c11;  
    a12 = c12;  
    a21 = c21;  
    a22 = c22;  
}
void juzhen(int &x11, int &x12, int &x21, int &x22, int n) {  
    int res11 = 1, res12 = 0, res21 = 0, res22 = 1; 
    while (n) {  
        if (n & 1) {  
            chengfa(res11, res12, res21, res22, x11, x12, x21, x22);  
        }  
        chengfa(x11, x12, x21, x22, x11, x12, x21, x22);  
        n = n >> 1;  
    }  
    x11 = res11%p;  
    x12 = res12%p;  
    x21 = res21%p;  
    x22 = res22%p;  
}
long long int HXW(long long int n,long long int m){
    long long int r = 1;//m^n(mod p)
    while(n){
        if(n&1){
            r = r*m % p;}
        m = (m*m) %p;
        n = n >> 1;}
    return r;}
long long int shulie(int x,int n){
    int x11,x12,x21,x22;
    x11=x;
    x12=5;
    x21=1;
    x22=x;
    juzhen(x11,x12,x21,x22,n);
    return (x11+x21)%p;
}
int main(){
    int n,k;
    n=read();
    k=read();
    n=n%(p-1);
    long long int mi2;
    mi2=HXW((1LL*(n+1)*(p-2)+1)%(p-1),2);
    long long int sum=0;
    for(int j=1;j<=k;j++){
        long long int mij=0;
        mij=HXW((1LL*n*(p-2))%(p-1),j);
        long long int AB;
        AB=shulie(2*j+1,n);
        sum=(sum+((1LL*mij*AB)%p))%p;
    }
    sum=(1LL*sum*mi2)%p;
    cout<<sum<<endl;
    return 0;
}