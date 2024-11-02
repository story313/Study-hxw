#include <bits/stdc++.h>  
using namespace std;  
int main(){
  int n;
  cin>>n;
  vector<int> dq(n);
  for (int i = 0; i < n; i++) {
    cin>>dq[i];//输入
    dq[i]-=i;//全部排到第一位
  }
  sort(dq.begin(), dq.end(),greater<int>());//排序
  for (int i = 0; i < n; i++) {
    dq[i]+=i;//放回原位
  }
  bool cuo=false;
  for (int i = 1; i < n; i++) {
    if(dq[i]==dq[i-1]+1) {
      cuo=true;//检查是否无限循环
      cout<<"unsortable!"<<endl;
      return 0;
    }
  }
  for(int i = 0; i < n-1; i++) {
    cout<<dq[i]<<" ";
  }
  cout<<dq[n-1]<<endl;
  return 0;
}