#include <bits/stdc++.h>  
using namespace std;
#define ll long long
const int p = 998244353;
int main() {
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int n;
        int pos;
        int val;
        cin>>n>>pos>>val;
        deque<int> a(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(pos==1){
          a.push_front(val);
          for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
          }
           cout<<a[n]<<endl;
        }else{
            for(int i=n;i>=pos;i--){
                a[i]=a[i-1];
            }
            a[pos-1]=val;
            for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
          }
             cout<<a[n]<<endl;
        }
    }
    return 0;
}