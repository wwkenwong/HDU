#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;
const int maxn=300000;
const int inf=1e9+10;
int n;
int par[maxn];
bool vis[maxn];
vector< int > son[maxn];

int dfs(int start){
    int out=0;
    vis[start]=1;
    if(son[start].size()==0){
        return 1;
    }
    for(int i=0;i<son[start].size();i++){
        if(vis[son[start][i]]==0){
            vis[son[start][i]]=1;
            out+=dfs(son[start][i]);
        }
        
        
    }
    return out+1;
}

int main(){
    std::ios::sync_with_stdio(false);
    
    memset(par,-1,sizeof(par));
    
    
    cin>>n;
    
    
    for(int i=1;i<=n;i++){
        int in;
        cin>>in;
        if(in==0){
            par[i]=0;
        }
        else{
            par[i]=in;
            son[in].push_back(i);
            
        }
    }
    
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int num_;
        cin>>num_;
        int sum=0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<num_;i++){
            int input;
            cin>>input;
            if(!vis[input]){
                sum+=dfs(input);
            }
            
            
        }
        cout<<sum<<"\n";
        
        
    }
    
}