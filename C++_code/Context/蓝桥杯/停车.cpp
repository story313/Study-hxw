#include <bits/stdc++.h>  
using namespace std;
#define ll long long
// int main(){
//   int n;
//   cin>>n;
//   cout<<2*(n/15);
//   return 0;
// }

// int main(){
//   int n;
//   cin>>n;
//   int max=n%10;
//   while(n){
//     n/=10;
//     max=max>=(n%10)?max:(n%10);
//   }
//   cout<<max;
//   return 0;
// }

// int main(){
//   string s;
//   cin>>s;
//   int n=s.size();
//   string sign="-";
//   int sign_num;
//   for(int i=0;i<n;i++){
//     if(s[i]==sign[0]){
//       sign_num=i;
//       break;
//     }
//   }
//   int num1=stoi(s.substr(0,sign_num));
//   int num2=stoi(s.substr(sign_num+1,n-sign_num-1));
//   cout<<num1-num2;
//   return 0;
// }


// int max_sum(vector<int> &a,int n,int m){
//   int sum=0;
//   for(int i=0;i<m;i++){
//     sum+=a[i];
//   }
//   int max_sum=sum;
//   for(int i=1;i<=n-m;i++){
//     sum=sum-a[i-1]+a[i+m-1];
//     max_sum=max(max_sum,sum);
//   }
//   return max_sum;
// }
// int main(){
//   int n,m;
//   cin>>n;
//   vector<int> ji;
//   vector<int> ou;
//   for(int i=0;i<n;i++){
//     cin>>m;
//     if(i%2==1){
//       ou.push_back(m);
//     }else{
//       ji.push_back(m);
//     }
//   }
//   int ji_num=ji.size();
//   int ou_num=n-ji_num;
//   cin>>m;
//   int ji_sum=0,ou_sum=0;
//   if(ji_num>=m){
//     ji_sum=max_sum(ji,ji_num,m);
//   }
//   if(ou_num>=m){
//     ou_sum=max_sum(ou,ou_num,m);
//   }
//   cout<<max(ji_sum,ou_sum);
//   return 0;  
// }

// vector<ll> numbers = {0,64,121,590,1226,1285,1311,1596,2325,3469,3588,3648,3929,4624,4690,4873,5278,5426,5676,6982,7397,7705,8020,8203,8399,8526,8647,8806,9226,9524,9655};
// ll res(ll s){
//   ll res=0;
//   for(int i=1;i<=30;i++){
//     res+=(s^numbers[i])*(s^numbers[i]);
//   }
//   return res;
// }
// int main() {  
//   ll s;
//   ll res_min=300000000000;
//   for(int i=0;i<=16400;i++){
//     ll res1=res(i);
//     if(res1<res_min){
//       res_min=res1;
//       s=i;
//     }
//   }
//   cout<<res_min<<" "<<s<<endl;
//   return 0;  
// }
vector<int> a(1001);
vector<int> pre(1001,-1);
vector<int> suf(1001,-1);
int pre1(vector<int> &a,int n,int m){//计算以a[i]结尾的最长严格单调减子列长度
  int m_max=0;
  for(int i=m-1;i>=1;i--){
    if(a[i]<a[m]){
      m_max=max(m_max,pre[i]+1);
    }
  }
  return m_max;
}
int suf1(vector<int> &a,int n,int m){//计算以a[i]开头的最长严格单调增子列长度
  int m_max=0;
  for(int i=m+1;i<=n;i++){
    if(a[i]>a[m]){
      m_max=max(m_max,suf[i]+1);
    }
  }
  return m_max;
}
int main(){
  int n;
  cin>>n;
  pre[1]=1;
  suf[n]=1;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int i=2;i<=n;i++){
    pre[i]=pre1(a,n,i);
  }
  for(int i=n-1;i>=1;i--){
    suf[i]=suf1(a,n,i);
  }
  int res=10000;
  for(int i=2;i<=n-1;i++){
    if(pre[i]==1||suf[i]==1){
      continue;
    }
    res=min(res,pre[i]+suf[i]-2);
  }
  cout<<res;
  return 0;
}