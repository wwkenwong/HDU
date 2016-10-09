#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ll long long
using namespace std;
const int maxn=1000000;
const int inf=1e9+10;
int a[maxn],deg[maxn];

int main(){
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		memset(deg,0,sizeof(deg));
		int n,m;
		cin>>n>>m;
		for(int i=1;i<n+1;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			int u,v;
			cin>>u>>v;
			deg[u]++;
			deg[v]++;
		}
		int odd_deg=0;
		for(int i=1;i<n+1;i++){
			if(deg[i]%2){
				odd_deg++;
			}
		}
		if(odd_deg!=0&&odd_deg!=2){
			cout<<"Impossible\n";
		}else if(odd_deg==0){
			int res=0;
			for(int i=1;i<n+1;i++){
				res=max(res, res^a[i]);
			}
			cout<<res<<"\n";
		}
		else{
			int res=0;
			for(int i=1;i<n+1;i++){
				deg[i]=(deg[i]+1)*0.5;
				if(deg[i]%2){
					res^=a[i];
				}
			}
			cout<<res<<"\n";
		}
		
		
	}
	return 0;
}
