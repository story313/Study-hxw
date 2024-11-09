#include <bits/stdc++.h>  
using namespace std;  
int len=0;
bool youwufei0=false;
//去掉字符串的后缀0
string Q(string& str){
    int i = str.size() - 1;
    while (str[i] == '0' && i > 0) i--;
    if(str[i] == '.') i--;
    str = str.substr(0, i + 1);
    return str;
}
string Z(string& str){
    int i = 0;
    while (str[i] == '0' && i < str.size() - 1) i++;
    str = str.substr(i);
    if(str[0] == '.'){
        str = "0" + str;
    }
    return str;
}
//字符串后缀的数字
int getNumber(string str){
    int i = str.size() - 1;
    int p=i;
    while (str[i] >= '0' && str[i] <= '9') i--;
    len=p-i;
    return stoi(str.substr(i + 1));
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int m=getNumber(s);
    s=s.substr(0,n-len-1);//得到前面的数字
    if(m>=n-3-len){
        for(int i=1;i<=n-len-2;i++){
            s[i]=s[i+1];
        }//移位
        s=s.substr(0,n-len-2);//去掉小数点取数字
        s=Z(s);//去掉前导0
        while(m-(n-3-len)>0){
            s=s+'0';
            m--;
        }//如果幂很大，补0
        cout<<s;
        return 0;
    }
    for(int i=1;i<=m+1;i++){
        s[i]=s[i+1];
    }
    s[m+1]='.';//把小数点放在这里
    s=Z(s);
    s=Q(s);
    cout<<s;
    return 0;
}