#include <bits/stdc++.h>
using namespace std;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
  int y=1901;
  int m=1;
  int d=1;
  int xinqi=2;//1901.1.1 is Tuesday
  int ans=0;
    while(1){
      if(m==2&&y%4==0&&y%100!=0||y%400==0){ 
        month[2]=29;
      }else{
        month[2]=28;}
      d++;
      if(d>month[m]){
        d=1;
        m++;
        if(m>12){
          m=1;
          y++;
        }
      }
      xinqi++;
      if(xinqi>7) xinqi=1;
      if((d==1||d==11||d==21||d==31)&&(xinqi==1)){
        ans++;
        //cout<<y<<"-"<<m<<"-"<<d<<": "<<xinqi<<endl;
      }
      if(y==2024&&m==12&&d==31){
        break;
      }
    }
    cout<<ans;
  return 0;
}