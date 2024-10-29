#include <bits/stdc++.h>
using namespace std;  
map <char, int> charToValue;  
bool isBalanced(string input)  
{  
    stack<char> bracketsStack;  
    int totalValue = 0;  
    for (unsigned int index = 0; index < input.length(); index++)  
    {  
        totalValue += charToValue[input[index]];  
        if (charToValue[input[index]] > 0)  
        {  
            if (!bracketsStack.empty() && charToValue[input[index]] > charToValue[bracketsStack.top()])  
            {  
                return false;  
            }  
            bracketsStack.push(input[index]);  
        }  
        else  
        {  
            if (bracketsStack.empty() || (!bracketsStack.empty() && charToValue[bracketsStack.top()] != -1 * charToValue[input[index]]))  
            {  
                return false;  
            }  
            bracketsStack.pop();  
        }  
    }  
    if (totalValue != 0)  
    {  
        return false;  
    }  
    else {  
        return true;  
    }  
}  
int main()  
{  
    charToValue['<'] = 1;  
    charToValue['('] = 2;  
    charToValue['['] = 3;  
    charToValue['{'] = 4;  
    charToValue['>'] = -1;  
    charToValue[')'] = -2;  
    charToValue[']'] = -3;  
    charToValue['}'] = -4;  
    int numberOfTests;  
    cin >> numberOfTests;  
    for (int testIndex = 0; testIndex < numberOfTests; testIndex++)  
    {  
        string currentInput;  
        cin >> currentInput;  
        if (isBalanced(currentInput))  
        {  
            cout << "YES" << endl;  
        }  
        else {  
            cout << "NO" << endl;  
        }  
    }  
    return 0;  
}