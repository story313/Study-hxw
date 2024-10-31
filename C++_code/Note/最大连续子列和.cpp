#include <bits/stdc++.h>  
using namespace std; 
#define ll long long
#define il inline
template <typename kuaidu>
il kuaidu read() {
  kuaidu sum = 0, fl = 1; 
  int ch = getchar();
  for (; !isdigit(ch); ch = getchar())
  if (ch == '-') fl = -1;
  for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
  return sum * fl;
}
il ll MAX_sum_subarr(const vector<int>& a,int n){
    ll maxsum=a[0];
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>maxsum){
            maxsum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxsum;
}//这个函数假定了数组非空
int main(){
    int n;
    n=read<int>();
    vector<int> a(n);
    for(int i=0;i<n;i++){
        a[i]=read<int>();
    }
    ll maxsum=MAX_sum_subarr(a,n);
    cout<<maxsum<<endl;
    return 0;
}