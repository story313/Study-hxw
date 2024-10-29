#include <bits/stdc++.h>
using namespace std;  
class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        vector<string> s;
        string dir;
        while(getline(ss,dir,'/')){
            if(dir==".."){
                if(!s.empty()){
                s.pop_back();
                }
            }else{
                if(dir!="."&&dir!=""){
                    s.push_back(dir);
                }
            }
        }
        string res="";
        for(auto& a:s){
            res+='/'+a;
        }
        if(res==""){
            res+='/';
        }
        return res;
    }
};