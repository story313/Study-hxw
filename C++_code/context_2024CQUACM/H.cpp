#include <bits/stdc++.h>  
using namespace std; 
void ff(){
    int a,b,c;
    cin>>a>>b>>c;
    int m=(a+b-c)/2;
    int s[2000000000];
    int p=0;
    int wei=0;
    while(m){
        if(m&1){
            s[wei]=p;
            wei++;}
        p++;
        m=m>>1;}
    for(int i=0;i<wei;i++){
        cout<<s[i]<<" ";}
    cout<<endl;}
int main(){
    int t;
    cin >> t;
    while(t--){
        ff();}
    return 0;}

    //1 l i I L 
    //0 O
    // => -> <-
    //>= <= > <
    // =(赋值) ==(等于) !=
