#include <bits/stdc++.h>  
using namespace std;
int main() {  
    string pushSequence, popSequence;  
    getline(cin, pushSequence);  
    getline(cin, popSequence); 
    stack<char> stack;  
    string operations;  
    int pushIndex = 0;  
    int popIndex = 0;  
    int length = pushSequence.length();  
    while (pushIndex < length || popIndex < length) {  
        if (pushIndex < length) {  
            stack.push(pushSequence[pushIndex]);  
            operations += 'P';  
            pushIndex++;  
        }  
        while (!stack.empty() && popIndex < length && stack.top() == popSequence[popIndex]) {  
            stack.pop();  
            operations += 'O';  
            popIndex++;  
        }  
        if (pushIndex == length && popIndex < length && stack.empty()) {  
            break;  
        }  
    }  
    if (popIndex == length) {  
        cout << "right" << endl;  
        cout << operations << endl;  
    } else {  
        cout << "wrong" << endl;  
        string remainingStack;  
        while (!stack.empty()) {  
            remainingStack = stack.top() + remainingStack;  
            stack.pop();  
        }  
        cout << remainingStack << endl;  
    }  
    return 0;  
}