#include <bits/stdc++.h>  
using namespace std; 
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >>n;
        int sum=0;
        string pp = "No"; 
        int d[n],t[n];
        string  s[n];
        for(int i=0;i<n;i++){
            cin >> d[i] >>t[i] >>s[i];
            if(d[i]==7||t[i]==1||t[i]==3||s[i] == pp||d[i]==6){
                sum++;
            }
        }
        cout <<sum<<endl;
    }
    return 0;
}