// #include <bits/stdc++.h>  
// using namespace std;  
// #define ll long long
// const int p = 998244353;
// template <typename kuaidu>
// kuaidu read() {
//   kuaidu sum = 0, fl = 1; 
//   int ch = getchar();
//   for (; !isdigit(ch); ch = getchar())
//   if (ch == '-') fl = -1;
//   for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
//   return sum * fl;
// }
// // int nixudui(vector<int> a, vector<int> b,int l,int r){
// //   if(l>=r) return 0;
// //   int mid = (l+r)/2;
// //   int sum = nixudui(a,b,l,mid)+nixudui(a,b,mid+1,r);
// //   int i=l,j=mid+1,k=l;
// //   while(i<=mid&&j<=r){
// //     if(a[i]<=a[j]) b[k++]=a[i++];
// //     else{
// //       sum+=mid-i+1;
// //       b[k++]=a[j++];
// //     }
// //   }
// //   while(i<=mid) b[k++]=a[i++];
// //   while(j<=r) b[k++]=a[j++];
// //   return sum;
// // }
// ll sum1;
// void mysort(int left, int right, vector<int> &a, vector<int> &b) {  
//     if(left >= right) return;  
//     int mid = (left + right) >> 1;  
//     mysort(left, mid, a, b);  
//     mysort(mid+1, right, a, b);  
//     int i = left, j = mid + 1;  
//     int k = left;  
//     while(i <= mid && j <= right) {  
//         if(a[i] <= a[j]) {  
//             b[k++] = a[i++];  
//         } else {  
//             sum1 += mid - i + 1;  
//             b[k++] = a[j++];  
//         }  
//     }  
//     while(i <= mid) b[k++] = a[i++];  
//     while(j <= right) b[k++] = a[j++];  
//     for(int k = left; k <= right; k++) {  
//         a[k] = b[k];  
//     }  
// }
// int main(){
//   int n = read<int>();
//   int j=0;
//   while(n--){
//     j++;
//     int m = read<int>();
//     vector<int> a(m);
//     for(int i = 0; i < m; i++) a[i] = read<int>();
//     vector<int> b(m);
//     sum1=0;
//     mysort(0,m-1,a,b);
//     cout<<"Scenario #"<<j<<":"<<endl;
//     cout << sum1<< endl<<endl;
//   }
//   return 0;
// }



#include <bits/stdc++.h>  
using namespace std;  
#define ll long long
ll sum;//记录逆序对个数，全局变量，使得可以在递归函数中修改
void mysort(int left, int right, vector<int> &a, vector<int> &b) {  
    if(left >= right) return;  
    int mid = (left + right) >> 1;  
    mysort(left, mid, a, b);  
    mysort(mid+1, right, a, b);  
    int i = left, j = mid + 1;  
    int k = left;  
    while(i <= mid && j <= right) {  
        if(a[i] <= a[j]) {  
            b[k++] = a[i++];  
        } else {
            sum += mid - i + 1;  
            b[k++] = a[j++];  
        }  
    }
    while(i <= mid) b[k++] = a[i++];  
    while(j <= right) b[k++] = a[j++];  
    // for(int k = left; k <= right; k++) {  
    //     a[k] = b[k];  
    // }//将b数组拷贝回a数组，时间复杂度为O(n)
    memcpy(a.data()+left, b.data()+left, sizeof(int)*(right-left+1));
    //这是拷贝内存的方式，更快
    //这是C++11的新特性，data()函数返回指向数组首元素的指针
}
int main(){
  int n;
  cin>>n;
  int j=0;
  while(n--){
    j++;
    int m;
    cin>>m;
    vector<int> a(m);
    for(int i = 0; i < m; i++) {
      cin>>a[i];
    }
    vector<int> b(m);
    sum=0;//初始化
    mysort(0,m-1,a,b);
    cout<<"Scenario #"<<j<<":"<<endl;
    cout << sum<< endl<<endl;
  }
  return 0;
}