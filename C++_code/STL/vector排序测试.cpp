#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res{intervals.front()};
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=res.back()[1])
                res.back()[1]=max(intervals[i][1],res.back()[1]);
            else
                res.push_back(intervals[i]);
        }
        return res;
    }
};
int main(){
  vector<vector<int>> intervals = {  
        {1,3,100},  
        {8,10},  
        {2,7,1},  
        {8,12},
        {2,7,1000}  
    };  
  sort(intervals.begin(),intervals.end());
  for (auto i : intervals){
    if(i.size()==2){  
      cout<<i[0]<<" "<<i[1]<<endl; 
      }else{
      cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
      }
    }
  return 0;
}