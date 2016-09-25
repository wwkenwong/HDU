#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <sstream>
#include <deque>
#define ll long long
using namespace std;
const int maxn=200000;
const int inf=1e9+10;


int t;
ll l,r;
int num[25];
ll dp[25][25];

//1.OO, 2.OE 3.EO 4.EE

ll dfs(int pos,int status,int flag)
  {
      if(pos<1)
      {
          if(status==2||status==3)
               return 1;
          else
               return 0;
      }
      if(!flag&&dp[pos][status])
          return dp[pos][status];
      int end=flag ? num[pos] : 9;//如果之前都是前?零 ??前?位可以取0~9
      ll ans=0;
      for(int i=0;i<=end;i++)
      {
          if(!status)
          {
              if(!i)
              {
                 ans=dfs(pos-1,0,0);
              }
              else if(i&1)
              {
                  ans+=dfs(pos-1,1,flag&&i==end);
              }
              else
              {
                  ans+=dfs(pos-1,3,flag&&i==end);
              }
  
          }
          else
          {
              if(status==1){
                  if(i&1){
                      ans+=dfs(pos-1,2,flag&&i==end);
                  }
            }
              else if(status==2){
                  if(i&1){
                      ans+=dfs(pos-1,1,flag&&i==end);
                  }
                  else{
                      ans+=dfs(pos-1,3,flag&&i==end);
                  }
              }
              else if(status==3){
                  if(i&1){
                      ans+=dfs(pos-1,1,flag&&i==end);
                  }
                  else
                      ans+=dfs(pos-1,4,flag&&i==end);
              }
              else{
                  if(!(i&1))
                  {
                      ans+=dfs(pos-1,3,flag&&i==end);
                  }
              }
          }
      }
      dp[pos][status]=ans;
      return ans;
  }

ll solve(ll x){
	memset(dp,0,sizeof(dp));
	int len=0;
	while(x){
		num[++len]=x%10;
		x/=10;
	}
	return dfs(len,0,1);
}

int main(){
	std::ios::sync_with_stdio(false);
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>l>>r;
		ll sol=solve(r)-solve(l-1);
		cout<<"Case #"<<i<<": "<<sol<<"\n";
	}
}
