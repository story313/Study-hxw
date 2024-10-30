#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int L,int M,int R){
    int help[R-L+1];//辅助数组
    int i=0;//数组指针
    int p1=L;//左半数组指针
    int p2=M+1;//右半指针
    while(p1<=M && p2<=R){  //比较合并至辅助数组
        //在两者都还没遍历到边界时，比较两者大小，将较大的放进辅助数组
        help[i++]=arr[p1]<=arr[p2]?arr[p1++]:arr[p2++];
    }
    //将还没遍历完的一个数组，直接放进辅助数组
    while (p1<=M){
        help[i++]=arr[p1++];
    }
    while (p2<=R){
        help[i++]=arr[p2++];
    }
    
    for(i=0;i<R-L+1;i++){ //返回至原数组
        arr[L+i]=help[i];
    }
    
}
void mergeSort(vector<int> &arr,int L,int R){
    if(arr.empty()||L==R){
        return;
    }
    int mid=L+((R-L)>>1);
    mergeSort(arr,L,mid); //左
    mergeSort(arr,mid+1,R);//右
    merge(arr,L,mid,R); //归并
    return;

}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}