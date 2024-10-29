#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int time;
        cin>>time;
        getchar();
        cin.ignore();
        cout<<time/24<<" "<<time%24<<endl;
        string email;
        getline(cin,email);
        int length=email.size();
        if(length>36){
            email=email.substr(0,36);
            length=36;
        }
        while(length){
            if(email.size()>=12){
                string sub=email.substr(0,12);
                cout<<sub<<endl;
                email=email.substr(12);
                length-=12;
            }else{
                cout<<email<<endl;
                break;
            }
        }
    }
} 