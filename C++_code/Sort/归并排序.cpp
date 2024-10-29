#include <bits/stdc++.h>  
using namespace std;
void twoway(vector<int>& arr, int L, int M, int R) {
    vector<int> help(R - L + 1); 
    int i = 0;    
    int p1 = L;  
    int p2 = M + 1;
    while (p1 <= M && p2 <= R) {
        help[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
    }
    while (p1 <= M) {
        help[i++] = arr[p1++];
    }
    while (p2 <= R) {
        help[i++] = arr[p2++];
    }
    for (i = 0; i < R - L + 1; i++) {
        arr[L + i] = help[i];
    }
}
void mergeSort(vector<int>& arr, int L, int R) {
    if (L >= R) {
        return; 
    }
    int mid = L + ((R - L) >> 1);
    mergeSort(arr, L, mid);     
    mergeSort(arr, mid + 1, R);  
    twoway(arr, L, mid, R);       
}
int main() {  
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if (n == 1){  
        cout << arr[0] << endl;
        return 0;  
    } else {  
        mergeSort(arr, 0, n - 1);
    }  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;  
}