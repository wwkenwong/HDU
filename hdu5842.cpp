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
const int maxn=1000100;
const int inf=1e9+10;
char s[maxn];
int n,a[30];

int main(){
    
    int kase=1;
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        memset(a,0,sizeof(a));
        cin>>s;
        int n=strlen(s);
        
        
        
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        
        for(int i=0;i<30;i++){
            //cout<< a[i]<<"\n";
            if(a[i]>0){
                ans++;
            
        }
        
    }
    cout<<"Case #"<<kase++<<": ";
    cout<<ans<<"\n";
   
}
    return 0;
}
