#include <bits/stdc++.h>  
using namespace std;
int main(){//这题写的纯屎山代码，建议还是看题解
    int n,m,ren;
    cin>>n>>m>>ren;
    int s,t;
    cin>>s>>t;
    vector<int> x(ren);
    vector<int> y(ren);
    vector<int> kan(ren);
    for(int i=0;i<ren;i++){
        cin>>x[i]>>y[i]>>kan[i];
    }
    vector<vector<int>> juzhen(n,vector<int>(m, 0));
    for(int i=0;i<ren;i++){
        while(y[i]>=1&&y[i]<=m){
            juzhen[x[i]-1][y[i]-1]=1;
            if(kan[i]==1){
                y[i]+=1;
            }else{
                y[i]-=1;
            }
        }
    }
    if(juzhen[0][0]==1||juzhen[s-1][t-1]==1){
        cout<<"No"<<endl;
        return 0;
    }
    if(s==1){
        if(juzhen[s-1][t-1]==1){
            cout<<"No"<<endl;
            return 0;
        }else{
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    int fl=1;
    bool neng=true;
    for(int i=1;i<n;i++) {
        for(int j=0;j<m;j++){
            if(juzhen[i-1][j]==0&&juzhen[i][j]==0){
                fl++;
                neng=true;
                break;
            }
            neng=false;
        }
        if(neng==false){cout<<"No"<<endl;
        return 0;}
        if(fl==s){cout<<"Yes"<<endl;
        return 0;}
    }
    return 0;
}