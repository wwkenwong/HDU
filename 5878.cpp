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
const int maxn=1000000;
const int inf=1e9+10;
ll a[maxn];
int cnt;
ll pow (int  x,int  y)
{
    x=(double)x;
    y=(double)y;
    long long ans=1;
    while(y)
    {
        if(y&1)
            ans*=x;
        x*=x;
        y>>=1;
    }
    return ans;
}
void init(){
    cnt=0;
    for(int i=0;i<30;i++){
        ll iii=pow(7,i);
        for(int j=0;j<30;j++){
            ll jjj=pow(5,j);
            for(int k=0;k<30;k++){
                ll kkk=pow(3,k);
                for(int m=0;m<30;m++){
                    ll mmm=pow(2,m);
                    if(iii*jjj*kkk*mmm>7000000000){
                        break;
                    }else{
                        a[cnt++]=iii*jjj*kkk*mmm;
                    }
                }
            }
        }
    }
}
int main(){
    std::ios::sync_with_stdio(false); //must add
    init();
    sort(a,a+cnt);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<*lower_bound(a,a+cnt,n)<<"\n";
    }
}
