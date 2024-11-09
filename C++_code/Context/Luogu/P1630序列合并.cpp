#include <bits/stdc++.h>  
using namespace std;
#define ll long long
#define il inline
const int p = 1000000007;
template <typename kuaidu>
il kuaidu read() {
  kuaidu sum = 0, fl = 1; 
  int ch = getchar();
  for (; !isdigit(ch); ch = getchar())
  if (ch == '-') fl = -1;
  for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
  return sum * fl;
}
int main(){
    int n;
    n=read<int>();
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
      a[i]=read<int>();
    }
    for(int i=0;i<n;i++){
      b[i]=read<int>();
    }
    vector<int> res;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if((i+1)*(j+1)>n){
          break;
        }
        res.push_back(a[i]+b[j]);
      }
    }
    sort(res.begin(),res.end());
    for(int i=0;i<n-1;i++){
      cout<<res[i]<<" ";
    }
    cout<<res[n-1];
    return 0;
}


//还可以用优先队列（最小堆）