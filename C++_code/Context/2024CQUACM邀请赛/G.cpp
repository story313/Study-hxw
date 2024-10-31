#include <bits/stdc++.h>
using namespace std;
void ff(){//这题写的纯屎山代码，建议还是看题解
    string tim;
    string email;
    cin >> tim;
    cin.ignore();
    int time = stoi(tim);
    int day=time/24;
    int shi=time%24;
    cout<<day<<" "<<shi<<endl;
    getline(cin, email);
    tim = tim.substr(0,tim.size()-1);
    if(email.size()>=13){
    string email1=email.substr(0,12);
    cout<<email1<<endl;
    string emailg=email.substr(12,email.size()-1);
        if(emailg.size()<=12){
            cout<<emailg<<endl;
        }else{
            string email2=emailg.substr(0,12);
            cout<<email2<<endl;
            string emailgg=emailg.substr(12,emailg.size()-1);
            if(emailgg.size()<=12){
                cout<<emailgg<<endl;
            }else{
                string email3=emailgg.substr(0,12);
                cout<<email3<<endl;
            }
        }
    }
    else{cout<<email<<endl;}
}
int main(){  
    int t;
    cin>>t;
    while(t--){
        ff();}
    return 0;  
}