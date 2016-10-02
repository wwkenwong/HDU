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

int n,a[maxn];
int main(){
    
    int t;
    cin>>t;
    
    int kase=1;
    
    for(int i=0;i<t;i++){
        memset(a,0,sizeof(a));
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            
             }
        cout<<"Case #"<<kase++<<": ";
        cout<<sum/2<<"\n";
    
}
    
}
