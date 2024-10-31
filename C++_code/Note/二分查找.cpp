#include <bits/stdc++.h>  
using namespace std;  
int main(){
    int n, min, max;
    cin >> n;
    max = n;
    min = 1;
        while(max-min>1){
        int gus = (min+max)/2;
        string ans;
        cout << gus <<endl;
        fflush(stdout) ;
        cin >> ans;
            if (ans == "<") {  
            max = gus - 1; }
            else if (ans == ">=") {  
            min = gus;} }
    if (max-min==1){
        string ans;
        cout << max <<endl;
        fflush(stdout) ;
        cin >> ans;
        if (ans == "<"){
            cout << "! " << min << endl;
        }
        else{cout << "! " << max << endl;}
    }
    else{cout << "! " << min << endl;}
return 0;}