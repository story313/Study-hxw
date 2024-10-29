//第一次实验第四题
#include <bits/stdc++.h>  
using namespace std;  
template <typename kuaidu>
kuaidu read() {
  kuaidu sum = 0, fl = 1; 
  int ch = getchar();
  for (; !isdigit(ch); ch = getchar())
  if (ch == '-') fl = -1;
  for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
  return sum * fl;
}
bool pop_stack_right(vector<int>& push, vector<int>& pop) {  
    stack<int> stack;  
    int j=0; 
    for(int x:push){
        stack.push(x);
        while(!stack.empty()&&stack.top()==pop[j]){
            stack.pop();
            j++;
        }
    }
    return stack.empty();
}
int factorial(int n) {    
    if (n == 0) {return 1;}  
    return n* factorial(n - 1); 
}  
int main() {
    int n = read<int>();
    vector<int> push(n), pop(n);
    for (int i = 0; i < n; i++) {
        push[i] = i+1;
    }
    for (int i = 0; i < n; i++) {
        pop[i] = i+1;
    }
    int jiecheng=factorial(n);
    int sum=0;
    while(jiecheng--){
        if(pop_stack_right(push,pop)){
            sum++;
        for(int a:pop){
            cout<<a<<" ";
        }
            cout<<endl;
        }
        next_permutation(pop.begin(), pop.end());
    }
    cout<<sum;
    return 0;
}