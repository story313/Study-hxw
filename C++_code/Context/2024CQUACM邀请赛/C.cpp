#include <bits/stdc++.h>  
using namespace std; 
int main(){
    int x,a,b,c;
    cin >>x >> a >> b >>c;
    int n=0;
    while(n<6){
        n++;
        if(c){
            x=5*x;
            c--;
        }
        else if(b){
            x=3*x;
            b--;
        }
        else if(a){
            x=2*x;
            a--;
        }
    }
    cout << x <<endl;
    return 0;
}