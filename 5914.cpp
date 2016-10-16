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
#include  <math.h>  

using namespace std;
const int maxn=200000;
const int inf=1e9+10;

int f[]={0,0,0,0,1,1,2,3,3,4,5,6,7,7,8,9,10,11,12,13,14};

int kase,t;
int main(){
	cin>>t;
	kase=1;
	while(t--){
		int n;
		cin>>n;
		cout<<"Case #"<<kase++<<": "<<f[n]<<"\n";
	}
	return 0;
}
