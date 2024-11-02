#include <bits/stdc++.h>  
using namespace std;  
#define ll long long
const int p = 998244353;
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
  int n;
  cin>>n;
  vector<int> a;
  for(int i=0;i<n;i++) {
    int token;
    cin>>token;
    if(token%2==1) { 
      a.push_back(token);}}
  sort(a.begin(),a.end());
  for(int i=0;i<a.size()-1;i++) {
      cout<<a[i]<<",";}
    cout<<a[a.size()-1]<<endl;
  return 0;
}