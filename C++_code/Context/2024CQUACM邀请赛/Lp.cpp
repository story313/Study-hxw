#include <bits/stdc++.h>
using namespace std;
#define ll long long
template <typename kuaidu>
kuaidu read() {
  kuaidu sum = 0, fl = 1; 
  int ch = getchar();
  for (; !isdigit(ch); ch = getchar())
  if (ch == '-') fl = -1;
  for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
  return sum * fl;
}
int main(){
    int T=read<int>();
    while(T--){
        int n=read<int>();
        ll k=read<ll>();
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            arr[i]=read<ll>();
        }
        if(n==1){
            if(arr[0]==k){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(n>2){
            ll k_min=0;
            for(int i=0;i<n;i++){
                k_min=k_min^arr[i];
            }
            if(k_min>k){
                cout<<"NO"<<endl;
            }else{
                if((k-k_min)%2){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }
        }else if(n==2){
            ll k_min=0;
            for(int i=0;i<n;i++){
                k_min=k_min^arr[i];
            }
            if(k_min>k){
                cout<<"NO"<<endl;
            }else{
                if((k-k_min)%2){
                    cout<<"NO"<<endl;
                }else{
                    ll a=(k-k_min)/2;
                    if((a|k_min)==(k_min^a)){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
    }
}
