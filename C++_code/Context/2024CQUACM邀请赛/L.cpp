#include <bits/stdc++.h>  
using namespace std;
int main(){//这题写的纯屎山代码，建议还是看题解，用位运算
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        long long int k;
        long long int sum=0;
        long long int mi=1;
        cin>>n>>k;
        long long int a[n];
        int jiousum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            if(a[0]==k){
                cout<<"YES"<<endl;
                continue; 
            }else{
                cout<<"NO"<<endl;
                continue; 
            }
        }
        else if(n==2){
            for(int i=0;i<n;i++){
                jiousum+=(a[i]%2);}
            if((k-jiousum)%2!=0){
                cout<<"NO"<<endl;
                continue; 
            }
            vector<int> wei(100,0);
            int maxj=0;
            int qid=false;
            for(int i=0;i<n;i++){
                int j=0;
                while(a[i]){
                    if(a[i]&1){
                        wei[j]++;
                        qid=true;
                        if(maxj<j){
                            maxj=j;
                        }
                    }
                    j++;
                    a[i]=a[i]>>1;
                }
            }
            if(qid==false){
              cout<<"YES"<<endl;
              continue;  
            }
            int maxci=0;
            for(int i=0;i<maxj+1;i++){
                wei[i]=wei[i]%2;
                if(wei[i]==1){
                    sum+=mi;
                if(maxci<i){
                    maxci=i;}
                }
                mi*=2;
            }
            if(sum==k||sum==0){
                cout<<"YES"<<endl;
                continue; 
            }
            if(sum>k){
                cout<<"NO"<<endl;
                continue; 
            }
            if(sum!=0&&maxci==0){
                if((k-sum)%4==0){
                cout<<"YES"<<endl;
                continue;
                }else{
                cout<<"NO"<<endl;
                continue;
                }
            }
            else{
                sum=(k-sum)%(2*mi);
                vector<int> sumwei(100,0);
                int j=0;
                while(sum){
                    if(sum&1){
                        sumwei[j]=1;
                    }
                    j++;
                    sum=sum>>1;
                }
                bool pp=true;
                for(int i=1;i<j+1;i++){
                    if(sumwei[i]==1){
                        if(wei[i-1]!=0){
                            pp=false;
                        }
                    }
                }
                if(pp){
                    cout<<"YES"<<endl;
                    continue; 
                }else{
                    cout<<"NO"<<endl;
                    continue; 
                }
            }
        }else{
            for(int i=0;i<n;i++){
                jiousum+=a[i]%2;
            }
            if((k-jiousum)%2!=0){
                cout<<"NO"<<endl;
                continue; 
            }
            vector<int> wei(100,0);
            int maxj=0;
            int qid=false;
            for(int i=0;i<n;i++){
                int j=0;
                while(a[i]){
                    if(a[i]&1){
                        wei[j]++;
                        qid=true;
                        if(maxj<j){
                            maxj=j;
                        }
                    }
                    j++;
                    a[i]=a[i]>>1;
                }
            }
            if(qid==false){
               cout<<"YES"<<endl;
               continue; 
            }
            for(int i=0;i<maxj+1;i++){
                wei[i]=wei[i]%2;
                if(wei[i]==1){
                    sum+=mi;
                }
                mi*=2;
            }
            if(sum>k){
                cout<<"NO"<<endl;
                continue; 
            }else{
                cout<<"YES"<<endl;
                continue; 
            }
        }
    }
    return 0;
}







