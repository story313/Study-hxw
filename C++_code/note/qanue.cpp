#include <bits/stdc++.h>
using namespace std;  
int main() {  
    int M;  
    cin >> M; 
    deque<int> queue; 
    string command;
    string output;
    for (int i = 0; i < M; i++) {  
        cin >> command; 
        if (command == "push") {  
            int x;  
            cin >> x; 
            queue.push_back(x); 
        } else if (command == "pop") {  
            if (!queue.empty()) {  
                queue.pop_front();  
            }  
        } else if (command == "empty") {  
            if (queue.empty()) {  
                output += "YES\n"; 
            } else {  
                output += "NO\n";
            }  
        } else if (command == "query") {  
            if (!queue.empty()) {  
                output += to_string(queue.front()) + "\n"; 
            }  
        }  
    }  
    cout << output;  
    return 0;  
}