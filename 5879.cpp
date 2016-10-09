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

char str[maxn];
int main(){

    while(~scanf("%s",str)){
        int si=strlen(str);
         if(si>=7){
             printf("1.64493\n");
             continue;
         }
        int sum=0;
       
        for(int i=0;i<si;i++){
            sum=sum*10+(str[i]-'0');
        }
        
        if(sum>=200000){
            printf("1.64493\n");
        }else{
            double ans = 0.0;
            for(double i=1; i<=sum; i++)
                ans += 1.0/(i*i);
            printf("%.5lf\n",ans);
        }
        
       
    }
    return 0;
    
}
