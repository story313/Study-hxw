#include <bits/stdc++.h>  
using namespace std;
int main(){//这题我写的挺好的
    string name;
    cin>>name;
    if(name=="yaemiko"){
        int T;
        cin>>T;
        while(T--){
            string a;
            int x;
            cin>>a>>x;
            x=x-1;
            int sum=0;
            for(int i=0;i<=63;i++){
                if(a[i]=='1'){
                    sum=sum^i;
                }
            }
            sum=sum^x;
            if(a[sum]=='0'){
                a[sum]='1';
            }else{
                a[sum]='0';
            }
            cout<<a<<endl;
        }
    }else{
        int T;
        cin>>T;
        while(T--){
            string a;
            cin>>a;
            int sum=0;
            for(int i=0;i<=63;i++){
                if(a[i]=='1'){
                    sum=sum^i;
                }
            }
            cout<<sum+1<<endl;
        }
    }
    return 0;
}