#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>    // std::sort

using namespace std;
int kase;
int n,t;
const int maxn=100001;
int a[maxn];
bool cmp (int i,int j) { return (i>j); }

int main() {
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    // your code goes here
    cin>>t;
    while(t--){
        cout<<"Case #"<<++kase<<": ";
        cin>>n;
        memset(a,0,sizeof(a));
        for(int i=1;i<n+1;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1,cmp);

        int sum=0;
        for(int i=1;i<n+1;i++){
            if(i%3==0){
                a[i]=0;
            }

        }
        for(int i=1;i<n+1;i++){
            
            sum+=a[i];
        }            
        
        cout<<sum<<"\n";
                
        
        
        
    }
    
    return 0;
}
