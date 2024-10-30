#include <bits/stdc++.h>
using namespace std;
void swap(int& a,int& b){
    int& temp=a;
    a=b;
    b=temp;
}
int Partition(vector<int>& arr,int l,int r){
    int i=l;    
    int j=r-1;  
    int p=arr[r];
    while(1){
        while (arr[i]<p&&i<r) {
            i++;
        }
        while (arr[j]>p&&j>l)  {
            j--;
        }
        if(i>=j){   
            break;
        }
        swap(arr[i],arr[j]);
        i++;
        j--;   
    }
    swap(arr[i],arr[r]);
    return i;
}
void QuickSort(vector<int>& arr,int l,int r){
    if(l<r){
        int i=Partition(arr,l,r);
        QuickSort(arr,l,i-1);
        QuickSort(arr,i+1,r);
    }
}
int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for(auto res:a){
        cout<<res<<" ";
    }
    return 0;
}