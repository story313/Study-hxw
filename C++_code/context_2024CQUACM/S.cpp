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
int main(){//这题还没写
    int n,q;
    n=read<int>();
    q=read<int>();
    return 0;
}