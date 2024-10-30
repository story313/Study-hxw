#include <bits/stdc++.h>
using namespace std;
void swap(int& a,int& b){
    int& temp=a;
    a=b;
    b=temp;
}
vector<int> ShellSort(vector<int> arr)
{
	int n=arr.size();
  int gap = n;
	while (gap>1){
		gap=gap/2;
		for (int i = 0; i < n - gap; ++i){
			int end = i;
			int tem = arr[end + gap];
			while (end >= 0){
				if (tem < arr[end]){
					arr[end + gap] = arr[end];
					end -= gap;
				}else{
					break;
				}
			}
			arr[end + gap] = tem;
		}
	}
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=ShellSort(arr);
    for(auto res:arr){
        cout<<res<<" ";
    }
}