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
int shumahe(int n){
  int sum=0;
  while(n){
    sum+=n%10;
    n/=10;
  }
  return sum;
}
int main(){
  int n,m;
  n = read<int>();
  m = read<int>();
  vector<pair<int,int>> res;
  //priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> res;  
  for(int i = 1; i <= n; i++) {  
    int digit_sum = shumahe(i);  
    res.push_back({digit_sum, i});  
  }  
  sort(res.begin(), res.end());
    // for(int i = 1; i < m; i++) {  
    //     res.pop_back();  
    // }  
    cout << res.front().second << endl;  
    return 0;  
}




#include <bits/stdc++.h>  
using namespace std;  
int shumahe(int n){
  int sum=0;
  while(n){
    sum+=n%10;
    n/=10;
  }
  return sum;
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<pair<int,int>> res;
  for(int i = 1; i <= n; i++) {  
    int digit_sum = shumahe(i);  
    res.push_back({digit_sum, i});  
  }  
  sort(res.begin(), res.end());
  cout << res.front().second << endl;  
  return 0;  
}
