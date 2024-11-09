#include <bits/stdc++.h>  
using namespace std;  
struct P {  
    string ip;  
    int nums;  
    set<int> vote;  
};  
bool cmp(const P& a, const P& b) {
    return a.vote.size() == b.vote.size() ? a.nums < b.nums : a.vote.size() > b.vote.size();   
}
int main() {  
    int n;  
    cin >> n;  
    vector<P> s(n + 1);  
    for (int i = 1; i <= n; ++i) {  
        cin >> s[i].ip >> s[i].nums;  
        for (int j = 0, x; j < s[i].nums; ++j) {  
            cin >> x;  
            s[i].vote.insert(x);  
        }  
    }    
    if (n > 1) {  
        sort(s.begin() + 1, s.end(), cmp);  
    }
    cout << s[1].ip;  
    cout << (n > 1 ? " " + s[2].ip : " -");  
    cout << (n > 2 ? " " + s[3].ip : " -");  
    return 0;  
}