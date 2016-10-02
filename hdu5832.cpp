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
const int maxn=10001000;
const int inf=1e9+10;
char s[maxn];
const int mod=137*73;
int main(){
    
   
    int kase=1;
    while(gets(s)){
        
        cout<<"Case #"<<kase++<<": ";
        int leng=strlen(s);
        int num=0;
        for(int i=0;i<leng;i++){
            num=(num*10+s[i]-'0')%mod;
        }
        if(num){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    
    return 0;
}