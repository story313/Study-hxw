#include <bits/stdc++.h>  
using namespace std;

void insertionSort(vector<int>& a,int n) {  
    if(a.empty()||a.size()<2){ 
        return;
    }
    for (int i=1;i<n;i++){ 
        int key=a[i]; 
        int j=i-1;  
        while (j>=0&&a[j]>key) {  
            a[j+1]=a[j];  
            j--;  
        }
        a[j+1]=key;
    }  
}
vector<int> BinaryInsertionSort(vector<int> arr){
    if(arr.size()<2){
        return arr;
    }
    for(int i=1;i<arr.size();i++){
        // 保存当前元素和其位置
        int key = arr[i];
        int pos = i;
        // 在已排序的部分（0 ~ i-1）中使用二分查找找到插入位置
        int low = 0;
        int high = i - 1;
        //进行折半查找
        while (low <= high) {
            // 计算中间位置
            int mid = (low + high) / 2;
            // 如果当前元素小于中间元素，说明插入位置在左半部分
            if (key < arr[mid]) {
                high = mid - 1;
            }
            // 如果当前元素大于等于中间元素，说明插入位置在右半部分
            else {
                low = mid + 1;
            }
        }
        // 将插入位置右边的元素都向右移动一位，为插入元素腾出空间
        for (int j = i; j > low; j--) {
            arr[j] = arr[j - 1];
        }
        // 将当前元素插入到找到的位置
        arr[low] = key;
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}