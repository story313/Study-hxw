#include <bits/stdc++.h>  
using namespace std;  
int main(){
    int n,k;
    cin>>n>>k;
    int g[n];
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    int d1=0,d2=0,d3=0;
    int maxsum=0;
    for(int i=0;i<n-2*k;i++){
        for(int j=i+k;j<n-k;j++){
            for(int m=j+k;m<n;m++){
                int sum=0;
                sum+=g[i]+g[j]+g[m];
                if(sum>maxsum){
                    maxsum=sum;
                    d1=i;
                    d2=j;
                    d3=m;
                }
            }
        }
    }//暴力法//时间复杂度O(n^3)//空间复杂度O(1)//时间超限
    cout<<maxsum<<endl;
    cout<<d1<<" "<<d2<<" "<<d3<<endl;
    return 0;
}

// #include <bits/stdc++.h>  
// using namespace std;  
// template <typename kuaidu>
// kuaidu read() {
//   kuaidu sum = 0, fl = 1; 
//   int ch = getchar();
//   for (; !isdigit(ch); ch = getchar())
//   if (ch == '-') fl = -1;
//   for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
//   return sum * fl;
// }
// int main() {  
//     int n, k; 
//     cin >> n >> k;  
//     vector<int> s(n);   
//     for (int i = 0; i < n; i++) {  
//          s[i]=read<int>();}  
//     vector<int> max1(n, 0),max2(n, 0),max3(n, 0),d1(n, -1),d2(n, -1),d3(n, -1);
//     max1[0] = s[0];  
//     d1[0] = 0; 
//     for (int i = 1; i < n; i++) {  
//         if (s[i] > max1[i - 1]) {  
//             max1[i] = s[i];  
//             d1[i] = i;  
//         }else{  
//             max1[i] = max1[i - 1];  
//             d1[i] = d1[i - 1];  
//         }  
//     }
//     max2[k]=s[k]+max1[0];  
//     d2[k]=k;
//     for (int i=k+1;i<n;i++) {  
//         if (max1[i-k]+s[i]>max2[i-1]){  
//             max2[i]=max1[i-k]+s[i];  
//             d2[i]=i;  
//         }else{  
//             max2[i] = max2[i - 1];  
//             d2[i] = d2[i - 1];  
//         }  
//     } 
//     max3[2*k]=s[2*k]+max2[k];  
//     d3[2*k] =2*k;  
//     for (int i=2*k+1;i<n;i++) {  
//         if(max2[i - k] + s[i]>max3[i-1]) {  
//             max3[i] = max2[i - k] + s[i];  
//             d3[i] = i;  
//         } else {  
//             max3[i] = max3[i - 1];  
//             d3[i] = d3[i - 1];  
//         }  
//     }  
//     cout << max3[n - 1] << endl;  
//     int C=d3[n-1];  
//     int B=d2[C-k];  
//     int A=d1[B-k];  
//     cout<< A<<" "<<B<<" "<<C<<endl;
//     return 0;  
// }//动态规划法//时间复杂度O(n)//空间复杂度O(n)

// #include <bits/stdc++.h>  
// using namespace std;    
// int main() {  
//     int n, k;  
//     cin >> n >> k;  
//     vector<int> a(n);  
//     for(int i=0;i<n;i++) {  
//         cin >> a[i];  
//     }  
//     vector<int> p(n),s(n);
//     vector<int> d1(n),d3(n);  
//     p[0]=a[0];
//     s[n-1]=a[n-1];  
//     d1[0]=0;
//     d3[n-1]=n-1;
//     for(int i=1;i<n;i++) {
//         p[i]=max(p[i-1],a[i]);
//         if(a[i]>p[i-1]) {
//             d1[i]=i;
//         }  else {
//             d1[i]=d1[i-1];
//         }
//     }
//     for(int i=n-2;i>=0;i--) {  
//         s[i]=max(s[i+1],a[i]);
//         if(s[i+1]<=a[i]) {
//             d3[i]=i;
//         }  else{
//             d3[i]=d3[i+1];
//         }
//     }  
//     int sum=0;
//     int d2=k;
//     for(int x=k;x<n-k;x++) {
//         if(sum<a[x]+p[x-k]+s[x+k]) {  
//             sum=a[x]+p[x-k]+s[x+k];  
//             d2=x;
//         }
//     }
//     cout << sum << endl;  
//     cout<<d1[d2-k]<<" "<<d2<<" "<<d3[d2+k]<<endl;
//     return 0;  
// }//前缀和后缀和//时间复杂度O(~3n)//空间复杂度O(n)