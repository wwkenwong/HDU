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


int main(){
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        if(j%2==0){
            cout<<"Bad\n";
        }else{
            cout<<"Balanced\n";
        }
    }
    
    return 0;
}
