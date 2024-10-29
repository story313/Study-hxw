#include <bits/stdc++.h>
using namespace std;
map <char, int> m;
bool judge(string str)
{
    stack<char> stk;
    int sum = 0;
    for (unsigned int i = 0; i < str.length(); i++)
    {
        sum += m[str[i]];
        if (m[str[i]] > 0)
        {
            if (!stk.empty() && m[str[i]] > m[stk.top()])
            {
                return false;
            }
            stk.push(str[i]);
        }
        else
        {// 我想带你去流浪
            if (stk.empty() || (!stk.empty()&&m[stk.top()] != -1 * m[str[i]]))
            {
                return false;
            }
            stk.pop();
        }
    }
    if (sum != 0)
    {
        return false;
    }
    else {
        return true;
    }
}
int main()
{
    m['<'] = 1;
    m['('] = 2;
    m['['] = 3;
    m['{'] = 4;
    m['>'] = -1;
    m[')'] = -2;
    m[']'] = -3;
    m['}'] = -4;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        if (judge(temp))
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}