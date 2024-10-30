#include <bits/stdc++.h>  
using namespace std;
void TwoWay(vector<int>& a, vector<int>& t, int lx, int rx, int ry) {  
    int i = lx;  
    int j = rx+1;  
    int k = lx;  
    while (i <= rx || j <= ry) {  
        if (j > ry || (i <= rx && a[i] <= a[j])) {  
            t[k] = a[i];  
            i++;  
        } else if (i <= rx) {
            t[k] = a[j];  
            j++;  
        } else {
            t[k] = a[j];  
            j++;  
        }  
        k++;  
    }  
}
void MergeSort_Bottom_plus(vector<int>& a, int l, int r) {  
    int n = r - l + 1;  
    vector<int> t(n);  
    int sorted_len = 1;  
    int count = 0;  
    while (sorted_len < n) {  
        count++;  
        int lx = 0;  
        while (lx <= r) {  
            int rx = min(lx + sorted_len - 1, r);  
            int ry = min(rx+ sorted_len , r);  
            if (count % 2 == 1) {  
                TwoWay(a, t, lx , rx ,  ry );  
            } else {  
                TwoWay(t, a, lx , rx ,  ry );  
            }  
            lx = ry + 1;  
        }  
        sorted_len *= 2;  
    }  
    if (count % 2 == 1) {  
        copy(t.begin(), t.end(), a.begin());  
    }  
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
        MergeSort_Bottom_plus(arr,0,n-1);
    }  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;  
}