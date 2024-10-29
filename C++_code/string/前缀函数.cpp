#include <bits/stdc++.h>
using namespace std;
vector<int> computePrefixFunction(const string& str) {  
    vector<int> pi(str.size());  
    for (int i = 1; i < str.size(); i++) {  
        int len = pi[i - 1];  
        while (len != 0 && str[i] != str[len]) {  
            len = pi[len - 1];  
        }  
        if (str[i] == str[len]) {  
            pi[i] = len + 1;  
        }  
    }  
    return pi;  
}  //前缀函数


// #include <iostream>  

// void dfs_auto(int x) {  
//     if (x <= 0) return;  
//     std::cout << x << " ";  
    
//     // 使用 auto 进行递归  
//     auto dfs = [&](autof,intn) {  
//         if (n <= 0) return;  
//         std::cout << n - 1 << " ";  
//         f(f, n - 1);  
//     };  
    
//     dfs(dfs, x - 1);  
// }  

// int main() {  
//     dfs_auto(5);  
//     return 0;  
// }