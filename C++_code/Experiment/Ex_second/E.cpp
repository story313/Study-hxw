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
int main(){
  int n=read<int>();
  int p=n;
  vector<vector<int>> a(9, vector<int>());
  while(n--){//n=-1
    int x=read<int>();
    a[x].push_back(read<int>());
  }
  for(int i=1;i<=8;i++){
    sort(a[i].begin(),a[i].end(),greater<int>());
  }
  int zuotu=a[1].size()+a[2].size()+a[7].size();
  int zuoao=a[3].size()+a[4].size()+a[8].size();
  int youtu=a[1].size()+a[3].size()+a[5].size();
  int youao=a[2].size()+a[4].size()+a[6].size();
  bool flag=false;
  if(zuotu==youao&&youtu==zuoao) flag=true;
  if(!flag){cout<<"-1"<<endl;return 0;}
  vector<int> ans(p);
  int d;
  if(a[5].size()>0){
    ans[0]=a[5][0];
    d=5;
  }else{
    ans[0]=a[6][0];
    d=6;
  }
  if(a[7].size()>0){
    ans[p-1]=a[7][0];
  }else{
    ans[p-1]=a[8][0];
  }
  
//   int i=1;
//   while(i<=p-1){
//     int A=0,B=0;
//     if(d==5){
//       if(a[3].size()>0){
//         A=a[3].back();
//       }else{
//         A=0;
//       }
//       if(a[4].size()>0){
//         B=a[4].back();
//       }else{
//         B=0;
//       }
//     if(A<B){
//       ans[i]=A;
//       a[3].pop_back();
//       d=3;
//     }else{
//       ans[i]=B;
//       a[4].pop_back();
//       d=4;
//     }
//     }
//     if(d==6){
//       if(a[1].size()>0){
//         A=a[1].back();
//       }else{
//         A=0;
//       }
//       if(a[2].size()>0){
//         B=a[2].back();
//       }else{
//         B=0;
//       }
//     if(A<B){
//       ans[i]=A;
//       a[1].pop_back();
//       d=1;
//     }else{
//       ans[i]=B;
//       a[2].pop_back();
//       d=2;
//     }
//     }
//     if(d==1){
//       if(a[3].size()>0){
//         A=a[3].back();
//       }else{
//         A=0;
//       }
//       if(a[4].size()>0){
//         B=a[4].back();
//       }else{
//         B=0;
//       }
//     if(A<B){
//       ans[i]=A;
//       a[3].pop_back();
//       d=3;
//     }else{
//       ans[i]=B;
//       a[4].pop_back();
//       d=4;
//     }
//     }
//     if(d==2){
//       if(a[1].size()>0){
//         A=a[1].back();
//       }else{
//         A=0;
//       }
//       if(a[2].size()>0){
//         B=a[2].back();
//       }else{
//         B=0;
//       }
//     if(A<B){
//       ans[i]=A;
//       a[1].pop_back();
//       d=1;
//     }else{
//       ans[i]=B;
//       a[2].pop_back();
//       d=2;
//     }
//     }
//     if(d==3){
//       if(a[3].size()>0){
//         A=a[3].back();
//       }else{
//         A=0;
//       }
//       if(a[4].size()>0){
//         B=a[4].back();
//       }else{
//         B=0;
//       }
//     if(A<B){
//       ans[i]=A;
//       a[3].pop_back();
//       d=3;
//     }else{
//       ans[i]=B;
//       a[4].pop_back();
//       d=4;
//     }
//     }
//     if(d==4){
//       if(a[1].size()>0){
//         A=a[1].back();
//       }else{
//         A=0;
//       }
//       if(a[2].size()>0){
//         B=a[2].back();
//       }else{
//         B=0;
//       }
//     if(A<B){
//       ans[i]=A;
//       a[1].pop_back();
//       d=1;
//     }else{
//       ans[i]=B;
//       a[2].pop_back();
//       d=2;
//     }
//     }
//     i++;
//   }


  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  return 0;
}