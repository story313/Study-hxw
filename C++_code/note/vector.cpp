#include <bits/stdc++.h>  
using namespace std;  
int main(){
    int n,m;
    cin >> n >> m;
    vector<char> pai(m); 
    vector<vector<char>> juzhen(n, pai);
    //vector<vector<vector<int>>> arr(x, vector<vector<int>>(y, vector<int>(z)));  
    for (int i=0;i<n;i++){
        if (i%3==1){
        for (int j=0;j<m;j++){
            if ((i+j)%3 == 0) {  
                juzhen[i][j] = 'G'; 
            } else if ((i+j)%3 == 1) {  
                juzhen[i][j] = 'B';  
            } else {  
                juzhen[i][j] = 'R'; 
            }  
        }}
        if (i%3==2){
        for (int j=0;j<m;j++){
            if ((i+j)%3 == 0) {  
                juzhen[i][j] = 'B'; 
            } else if ((i+j)%3 == 1) {  
                juzhen[i][j] = 'R';  
            } else {  
                juzhen[i][j] = 'G'; 
            }  
        }}
        else{
        for (int j=0;j<m;j++){
            if ((i+j)%3 == 0) {  
                juzhen[i][j] = 'R'; 
            } else if ((i+j)%3 == 1) {  
                juzhen[i][j] = 'G';  
            } else {  
                juzhen[i][j] = 'B'; 
            }  
        }}
    }
    for (int i =0; i<n; i++) {  
        for (int j=0; j<m; j++) {  
            cout << juzhen[i][j]; 
        }  
        cout << endl; 
    }  
    return 0;
}