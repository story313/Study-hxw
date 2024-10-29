#include <bits/stdc++.h>  
using namespace std; 
int main(){
int T;
    cin >> T;  
    while (T--) {  
    string s;  
    cin >> s;
    long long int A, B, C, D, E;
    cin>>A>>B>>C>>D>>E;
    long long int y = 100+2*C;  
    long long int x = (s == "Wuli") ? min(C,(long long int)100) : 0; 
    D = 1000000*D-B*(100-E)*(10000 + x*y);  
    cout << D << endl;  
    }
    return 0;
}
