#include <bits/stdc++.h>  
using namespace std;
#define ll long long
const int p = 998244353;
int main() {
    int n;
    cin>>n;
    if(n<18) printf("0");
    else {
        vector<int> S(n+1,0),A(n+1,0),B(n+1,0),C(n+1,0);
        C[0] = B[6] = 1;
        for(int i=1; i<6; ++i)
            C[i] = (ll)C[i-1]*26%p;
        for(int i=6;i<=n;++i) {
            S[i] =((ll)S[i-1]*26%p+A[i-6])%p;
            A[i] =((B[i-6]+(ll)A[i-1]*26%p)%p-A[i-6]+p) % p;
            B[i] =((C[i-6]+(ll)B[i-1]*26%p)%p-B[i-6]+p) % p;
            C[i] =((ll)C[i-1]*26%p-C[i-6]+p) % p;}
            printf("%d",S[n]);
    }
    return 0;
}


