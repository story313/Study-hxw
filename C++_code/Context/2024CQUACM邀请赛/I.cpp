#include <bits/stdc++.h>  
using namespace std;
unordered_map<char, int> wei=
{{'3',3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'1', 10}, {'J', 11}, {'Q', 12}, {'K', 13}, {'A', 14}, {'2', 15}}; 
unordered_map<int, string> zi = {  
    {3, "3"}, {4, "4"}, {5, "5"}, {6, "6"}, {7, "7"},  
    {8, "8"}, {9, "9"}, {10, "10"}, {11, "J"},  
    {12, "Q"}, {13, "K"}, {14, "A"}, {15, "2"}  
};//这题写的纯屎山代码，建议还是看题解
bool shunzi(string pai){
    if(pai[0]!='1'){
        int a=wei[pai[0]];
        int b=wei[pai[1]]-1;
        if(a==b){
            return 1;
        }else{return 0;}
    }else{
        if(pai[0]==pai[2]){
            return 0;
        }else {return 1;}
    }
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string pai;
        cin>>pai;
        if(pai.size()==1||(pai.size()==2&&pai[0]=='1')){
            char paii =pai[0];
            if(paii=='A'||paii=='2'){
                cout<<"pass"<<endl;
            }else{
                cout<<zi[wei[paii]+1]<<endl;
            }
        }
        else if((pai.size()==3&&pai[0]==pai[1])||(pai.size()==6&&pai[0]=='1'&&pai[2]=='1'&&pai[4]=='1')){
            cout<<"boom"<<endl;
        }
        else if(pai.size()==2||(pai.size()==4&&pai[0]=='1'&&pai[3]=='1')){
            char pai1=pai[0];
            int pai1wei=wei[pai1];
            if(pai1wei==14||pai1wei==15){
                cout<<"pass"<<endl;
            }else{
                cout<<zi[pai1wei+1]<<zi[pai1wei+1]<<endl;
            }
        }
        else if(shunzi(pai)){//顺子
            int chang = pai.size();
            int pai1wei=wei[pai[0]];
            if(pai[chang-1]=='A'||pai[chang-1]=='2'){
                cout<<"pass"<<endl;
            }else{
                if(pai.find('0') != string::npos){
                chang=chang-1;
            }
                for(int i=0;i<chang;i++){
                    cout<<zi[pai1wei+1+i];
                }
                cout<<endl;
            }
        }else{//连对
            int chang = pai.size();
            int pai1wei=wei[pai[0]];
            if(pai[chang-1]=='A'||pai[chang-1]=='2'){
                cout<<"pass"<<endl;
            }else{
                if(pai.find('0') != string::npos){
                chang=chang-2;
            }
                int sum=chang/2;
                for(int i=0;i<sum;i++){
                    cout<<zi[pai1wei+1+i]<<zi[pai1wei+1+i];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}