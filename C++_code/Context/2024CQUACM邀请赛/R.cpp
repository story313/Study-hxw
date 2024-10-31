#include <bits/stdc++.h>  
using namespace std;
#define ll long long
struct point { //这题我写的挺好的
    ll x, y; 
    bool operator<(const point& p) const {  
        if( x < p.x || (x == p.x && y < p.y)){
            return 1;
        }else{
            return 0;
        }
    }  
};
ll chacheng(const point& O, const point& A, const point& B) {  
    return 1LL*(A.x-O.x)*(B.y-O.y)-1LL*(A.y-O.y)*(B.x-O.x);  
}
vector<point> tubao(vector<point>& p) {  
    int n = p.size();
    sort(p.begin(), p.end()); 
    if (n == 3) {  
    if (chacheng(p[0], p[1], p[2]) == 0) {  
        return {p[0], p[2]};  
    } else {   
      return p;  } 
    }
    vector<point> bao;  
    bao.reserve(n+1);
     for (int i = 0; i < n; ++i) {  
        while (bao.size() >= 2 && chacheng(bao[bao.size()-2], bao.back(), p[i]) <= 0) {  
            bao.pop_back();  
        }  
        bao.push_back(p[i]);  
    }  
   int size = bao.size();  
    for (int i = n - 2; i >= 0; --i) {  
        while (bao.size() > size && chacheng(bao[bao.size()-2], bao.back(), p[i]) <= 0) {  
            bao.pop_back();  
        }  
        bao.push_back(p[i]);  
    }  
    bao.pop_back(); 
    return bao;  
}  
bool intubao(const point& p, const vector<point>& tubao) {  
    int n = tubao.size();  
    int sum = 0;  
    for (int i=0;i<n;++i) {  
        const point& a = tubao[i];  
        const point& b = tubao[(i+1)%n]; 
        if (chacheng(a,b,p)==0&&min(a.x,b.x)<p.x&&p.x<max(a.x,b.x)&&min(a.y,b.y)<p.y&&p.y<max(a.y,b.y)) {
            return false;  }
        ll k = chacheng(a,b,p);  
        ll juli1=a.y-p.y;  
        ll juli2=b.y-p.y;  
        if (k>0&&juli1<=0&&juli2>0) {
            ++sum;}  
        if (k<0&&juli2<=0&&juli1>0) {
            --sum;}  
    }  
    return sum != 0;  
}   
int main(){
    int T;
    cin>>T;
    while(T--){
    int n;
    ll x0,y0;
    cin>>n>>x0>>y0;
    set<point> butong;
    for (int i=0;i<n;i++) {  
            point t;  
            cin >> t.x >> t.y;  
            butong.insert(t);
    }
    vector<point> po(butong.begin(), butong.end());
    point woziji = {x0, y0}; 
    bool si=false;
    for (const auto&p:po) {  
            if (p.x==x0 &&p.y==y0) {  
                si=true;  
                cout << "No" << endl;  
                break;  
            }  
    } 
    if(si==false){
    if(po.size() == 1||po.size() == 2){
        cout<<"Yes"<<endl;
        continue;
    }
    vector<point> tubao1 = tubao(po);  
     if (intubao(woziji, tubao1)) {  
            cout << "No" << endl;  
        } else {  
            cout << "Yes" << endl;  
        }  
    }
    }
    return 0;
}