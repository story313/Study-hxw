#include <bits/stdc++.h>  
using namespace std;
#define ll long long
const int p = 998244353;
int main() {
    ios_base::sync_with_stdio(false);
    int nan;
    int nv;
    cin>>nan>>nv;
        int man=1;
        int woman=1;
        int T;
        cin>>T;
    while(T--){ 
        if(man%nan==0&&woman%nv!=0){
            cout<<nan<<" "<<woman%nv<<endl;
        }
        if(man%nan!=0&&woman%nv==0){
            cout<<man%nan<<" "<<nv<<endl;
        }
        if(man%nan==0&&woman%nv==0){
            cout<<nan<<" "<<nv<<endl;
        }else{
            cout<<man%nan<<" "<<woman%nv<<endl;
        }
        man++;
        woman++;
    }
    return 0;
}

#include <bits/stdc++.h>  
using namespace std;  
template <typename kuaidu>
kuaidu read() {
  kuaidu sum = 0, fl = 1; 
  int ch = getchar();
  for (; !isdigit(ch); ch = getchar())
  if (ch == '-') fl = -1;
  for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
  return sum * fl;
}
int main() {  
    int m,n; 
    m=read<int>();
    n=read<int>(); 
    int k;
    k=read<int>(); 
    for (int i = 0; i < k; i++) {  
        int man = (i % m) + 1;   
        int woman = (i % n) + 1;
        cout<<man<<" "<< woman<<endl; 
    }
    return 0;  
}