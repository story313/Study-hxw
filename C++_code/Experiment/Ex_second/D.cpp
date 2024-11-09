#include <iostream>  
#include <vector>  
#include <algorithm> 
using namespace std;  
int main(){
  int n;
  cin>>n;
  vector<int> dq(n);
  for (int i = 0; i < n; i++) {
    cin>>dq[i];
    dq[i]-=i;
  }
  sort(dq.begin(), dq.end(),greater<int>());
  for (int i = 0; i < n; i++) {
    dq[i]+=i;
  }
  bool cuo=false;
  for (int i = 1; i < n; i++) {
    if(dq[i]==dq[i-1]+1) {
      cuo=true;
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


 
// using namespace std;  
// inline int read() {  
//     int x = 0, f = 1;  
//     char ch = getchar();  
//     while (ch < '0' || ch > '9') {  
//         if (ch == '-') f = -1;  
//         ch = getchar();  
//     }  
//     while (ch >= '0' && ch <= '9') {  
//         x = (x << 1) + (x << 3) + (ch ^ 48);  
//         ch = getchar();  
//     }  
//     return x * f;  
// }  
// inline void write(int x) {  
//     if (x < 0) {  
//         putchar('-');  
//         x = -x;  
//     }  
//     if (x > 9) write(x / 10);  
//     putchar(x % 10 + '0');  
// }  
// int main() {  
//     ios::sync_with_stdio(false);  
//     cin.tie(0);  
//     cout.tie(0);  
//     int n = read();  
//     vector<int> dq(n);  
//     for (int i = 0; i < n; i++) {  
//         dq[i] = read();  
//         dq[i] -= i;  
//     }  
//     sort(dq.begin(), dq.end(), greater<int>());  
    
//     for (int i = 0; i < n; i++) {  
//         dq[i] += i;  
//     }  
//     bool cuo = false;  
//     for (int i = 1; i < n; i++) {  
//         if (dq[i] == dq[i-1] + 1) {  
//             cuo = true;  
//             cout << "unsortable!" << endl;  
//             return 0;  
//         }  
//     }  
//     for (int i = 0; i < n-1; i++) {  
//         write(dq[i]);  
//         putchar(' ');  
//     }  
//     write(dq[n-1]);  
//     putchar('\n');  
//     return 0;  
// }