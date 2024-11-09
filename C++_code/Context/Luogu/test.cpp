// #include <bits/stdc++.h>  //万能头文件
// using namespace std;
// #define ll long long//long long的简写
// #define il inline//inline的简写 加快函数速度
// template <typename T>//快速输入模板
// il T read() {
//   T sum = 0, fl = 1; 
//   int ch = getchar();
//   for (; !isdigit(ch); ch = getchar())
//   if (ch == '-') fl = -1;
//   for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
//   return sum * fl;
// }//以上均为我的代码模板
// il bool cmp(pair<int,int>& x,pair<int,int>& y) {  
//     if (x.second != y.second) {  
//         return x.second > y.second;
//     }  
//     return x.first < y.first;
// }  //比较运算符的定义
// int n,m;//全局变量的定义
// int j=0;
// int main(){
//   n=read<int>();
//   m=(1.5*read<int>());
//   vector<pair<int,int>> a(n);
//   for(int i=0;i<n;i++){
//     a[i].first=read<int>();
//     a[i].second=read<int>();
//   }//输入
//   sort(a.begin(), a.end(), cmp);//排序
//   while(a[m+j].second==a[m-1].second)j++;//考虑最后几名的同分情况
//   cout<<a[m-1].second<<" "<<m+j<<endl;
//   for(int i=0;i<m+j;i++){
//     cout<<a[i].first<<" "<<a[i].second<<endl;
//   }//输出
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void inssort(vector<int>& A,int n){
    for(int i=1;i<n;i+=2){
        int t=A[i];
        int s=A[i-1];
        int j;
        for(j=i;j>2;j-=2){
            if(A[j-2]>t||(A[j-2]==t&&A[j-1]>A[j-3])){
                A[j]=A[j-2];
                A[j-1]=A[j-3];

            }
            else
                break;

        }
                                        A[j]=t;
        A[j-1]=s;
    }
    }
int main(){
    int m,n;
    cin>>n>>m;
    vector <int> v1;
    int t;
    int count=0;
    while(cin>>t){
        v1.push_back(t);
        count++;
        if(count>=2*n) break;
    }
    int *p=&v1[0];
    inssort(v1,v1.size());
    
    int x=m*1.5;
    int y=2*n-2*x+1;
    int s=v1[y];
    vector <int> v2;
    for(int i=1;i<v1.size();i+=2){
        if(v1[i]>=s){
            v2.push_back(v1[i]);
            v2.push_back(v1[i-1]);
        }
    }
    cout<<v2[0]<<" "<<v2.size()/2<<endl; 
    for(int i=v2.size()-1;i>=0;i--){
        if(i%2!=0)
            cout<<v2[i]<<" ";
        else 
            cout<<v2[i]<<endl;
        }
    return 0;
}