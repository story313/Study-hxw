#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> stack;
    string token;
    while(cin>>token){
       if(token=="#"){
        break;
       }
       if(isdigit(token[0])||(token.size()>1&&isdigit(token[1]))){
            stack.push(stoi(token));
        }else{
            if(stack.size()<2){
                cout<<"Expression Error: "<<stack.top()<<endl;
                return 0;
            }
            int a=stack.top();
            stack.pop();
            int b=stack.top();
            stack.pop();
            if(token=="+"){
                stack.push(a+b);
            }else if(token=="-"){
                stack.push(b-a);
            }else if(token=="*"){
                stack.push(a*b);
            }else if(token=="/"){
                if(a==0){
                    cout<<"Error: "<<b<<"/0"<<endl;
                    return 0;
                }
                stack.push(b/a);
            }
        }
    }
    if(stack.size()!=1){
        cout<<"Expression Error: "<<stack.top()<<endl;
    }else{
        cout<<stack.top()<<endl;
    }
    return 0;
}
//输入方式二：
    // string inputs;
    // getline(cin,inputs,'#');
    // istringstream iss(inputs);
    // string token;
    // while(iss>>token){
    // }
//输入方式三：
    // vector<string> inputs;
    // string str;
    // while(cin>>str){
    //     if(str!="#"){
    //     inputs.push_back(str);
    // }else{break;}
    // }
//遍历方式一：
    // string token;
    // int lenth=inputs.size();
    // for(int i=0;i<lenth;i++){
    //     token=inputs[i];
    // }
//遍历方式二：
    ///for(auto& token : inputs){}///或者这样遍历