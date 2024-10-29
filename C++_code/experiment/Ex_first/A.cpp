#include <bits/stdc++.h>  
using namespace std;
#define ll long long
const int p = 998244353;
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
    string s;
    cin>>s;
    int sum=0;
    for(char c:s){
        sum+=c-'0';
    }
    if(sum%3==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    }
    return 0;
}