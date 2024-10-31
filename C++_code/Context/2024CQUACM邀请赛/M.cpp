#include <bits/stdc++.h>  
using namespace std;
#define ll long long
const long long int MAX=9223372036854775807;
int main(){//这题我写的挺好的
    int n,m;
    cin>>n>>m;
    vector<ll int> x(n+1);
    x[0]=0;
    for(int i=1;i<=n;++i){
        cin>>x[i];}
    vector<vector<int>> point(n+1);
    while(m--){
        int u,v;
        cin>>u>>v;
        point[u].push_back(v);
        point[v].push_back(u);}
    vector<ll int> dist1toall(n+1,MAX);
    dist1toall[1] = x[1];
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> queue1;
    queue1.push({x[1], 1});  
    while (!queue1.empty()) {  
        pair<ll, int> minway = queue1.top();  
        ll min1u = minway.first;  
        int u = minway.second; 
        queue1.pop();  
        if (min1u > dist1toall[u]) {
            continue;}
        for (int v : point[u]) {  
            ll newnu = dist1toall[u] + x[v];  
            if (newnu < dist1toall[v]) {  
                dist1toall[v] = newnu;  
                queue1.push({newnu, v});}  
        }  
    }  
    if(dist1toall[n]==MAX){cout<<-1<<endl;return 0;}
    vector<ll int> distntoall(n+1,MAX);
    distntoall[n] = x[n]; 
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> queue2;  
    queue2.push({x[n], n});  
    while (!queue2.empty()) {  
        pair<ll, int> minway2 = queue2.top();  
        ll minnu = minway2.first;  
        int u = minway2.second; 
        queue2.pop();
        if (minnu > distntoall[u]) {
            continue;  }
        for (int v : point[u]) {  
            ll newnu = distntoall[u] + x[v];  
            if (newnu < distntoall[v]) {  
                distntoall[v] = newnu;  
                queue2.push({newnu, v});  
            }  
        }  
    }  
    ll rel=MAX;
    for(int i=1;i<=n;i++){
        ll way=MAX;
        if(distntoall[i]!=MAX&&dist1toall[i]!=MAX){
           way=1LL*(distntoall[i]+dist1toall[i]-2*x[i]);}
        if(rel>way){rel=way;}
    }
    cout<<rel<<endl;
    return 0;
}