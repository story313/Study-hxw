#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> a(1001);
vector<int> pre(1001,-1);
vector<int> suf(1001,-1);
int pre1(vector<int> &a,int n,int m){//计算以a[i]结尾的最长严格单调减子列长度
  int m_max=1;
  for(int i=m-1;i>=1;i--){
    if(a[i]>a[m]){
      m_max=max(m_max,pre[i]+1);
    }
  }
  return m_max;
}
int suf1(vector<int> &a,int n,int m){//计算以a[i]开头的最长严格单调增子列长度
  int m_max=1;
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
  int res=0;
  for(int i=2;i<=n-1;i++){
    if(pre[i]==1||suf[i]==1){
      continue;
    }
    res=max(res,pre[i]+suf[i]-1);
  }
  cout<<res;
  return 0;
}