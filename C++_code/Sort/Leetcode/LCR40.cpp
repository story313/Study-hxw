#include <bits/stdc++.h> 
//#include <functional>
using namespace std;
class Solution1 {
public:
    int maximumScore(vector<int>& cards, int cnt) {
        int len=cards.size();
        sort(cards.begin(),cards.end(),greater<int>());
        // for(int i=0;i<len/2;i++){
        //   swap(cards[i],cards[len-i-1]);
        // }
        int s = 0;
        for(int i=1;i<=cnt;i++){
          s+=cards[i-1];
        }
        if (s % 2 == 0) {
            return s;
        }
        auto replaced_sum = [&](int x) -> int {
            for (int i = cnt; i < cards.size(); i++) {
                if (cards[i] % 2 != x % 2) { // 找到一个最大的奇偶性和 x 不同的数
                    return s - x + cards[i]; // 用 cards[i] 替换 s
                }
            }
            return 0;
        };
        int x = cards[cnt - 1];
        int ans = replaced_sum(x); // 替换 x
        for (int i = cnt - 2; i >= 0; i--) { // 前 cnt-1 个数
            if (cards[i] % 2 != x % 2) { // 找到一个最小的奇偶性和 x 不同的数
                ans = max(ans, replaced_sum(cards[i])); // 替换
                break;
            }
        }
        return ans;
    }
};
class Solution2 {
public:
    int maximumScore(vector<int>& cards, int cnt) {
      sort(cards.begin(),cards.end());
      vector<int>j;
      vector<int>o;
      for(auto a:cards){
        if(a%2==0){
          o.push_back(a);
        }else{
          j.push_back(a);
        }
      }
      auto j_len=j.size();
      auto o_len=o.size();
      if(((o_len+(j_len/2)*2)<cnt)||(o_len==0&&cnt%2==1)){
        return 0;
      }
      int sum=0;
      if(cnt%2==0){
        while(cnt){
          if(o_len>1&&j_len>1){
            if(o[o_len-1]+o[o_len-2]<j[j_len-1]+j[j_len-2]){
              sum+=j[j_len-1]+j[j_len-2];
              j_len=j_len-2;
              j.pop_back();
              j.pop_back();
              cnt=cnt-2;
              continue;
            }else{
              sum+=o[o_len-1]+o[o_len-2];
              o_len=o_len-2;
              o.pop_back();
              o.pop_back();
              cnt=cnt-2;
              continue;
            }
          }
          if(o_len<2){
            sum+=j[j_len-1]+j[j_len-2];
              j_len=j_len-2;
              j.pop_back();
              j.pop_back();
              cnt=cnt-2;
              continue;
          }
          if(j_len<2){
            sum+=o[o_len-1]+o[o_len-2];
              o_len=o_len-2;
              o.pop_back();
              o.pop_back();
              cnt=cnt-2;
              continue;
          }
        }
      }else{
          sum+=o[o_len-1];
          o.pop_back();
          cnt--;
          o_len--;
          while(cnt){
          if(o_len>1&&j_len>1){
            if(o[o_len-1]+o[o_len-2]<j[j_len-1]+j[j_len-2]){
              sum+=j[j_len-1]+j[j_len-2];
              j_len=j_len-2;
              j.pop_back();
              j.pop_back();
              cnt=cnt-2;
              continue;
            }else{
              sum+=o[o_len-1]+o[o_len-2];
              o_len=o_len-2;
              o.pop_back();
              o.pop_back();
              cnt=cnt-2;
              continue;
            }
          }
          if(o_len<2){
            sum+=j[j_len-1]+j[j_len-2];
              j_len=j_len-2;
              j.pop_back();
              j.pop_back();
              cnt=cnt-2;
              continue;
          }
          if(j_len<2){
            sum+=o[o_len-1]+o[o_len-2];
              o_len=o_len-2;
              o.pop_back();
              o.pop_back();
              cnt=cnt-2;
              continue;
          }
        }
      }
      return sum;
    }
};
int main(){
  int n,cut;
  cin>>n>>cut;
  vector<int>cards(n);
  for(int i=0;i<n;i++){
    cin>>cards[i];
  }
    Solution1 solution1;
    Solution2 solution2;
    int sum1=solution1.maximumScore(cards,cut);
    int sum2=solution2.maximumScore(cards,cut);
    cout<<sum1<<" "<<sum2<<endl;
    if(sum1!=sum2){
      cout<<"错误:"<<endl;
      for(auto s:cards){
        cout<<s<<" ";
      }
    }
  return 0;
}