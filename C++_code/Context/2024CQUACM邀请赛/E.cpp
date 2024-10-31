#include <bits/stdc++.h>  
using namespace std; 
int main(){
    int T;
    cin >> T;
    while(T--){
        int p,m;
        cin >> p>>m;
            int x1,y1,x2,y2;
            cin>>x1>>y1;
            cin >> x2>>y2;
            if((x1+y1-x2-y2)&1){
                cout<<"Xiaowei"<<endl;
            }else{
                cout<<"Duishou"<<endl;
            }
    }
    return 0;
}