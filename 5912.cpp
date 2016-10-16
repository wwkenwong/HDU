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
#include <math.h> 
using namespace std;
const int maxn=2000;
const int inf=1e9+10;
int a[maxn],b[maxn];
int gcd(int a,int b) {
     if(!b)return a;
     return gcd(b,a%b);}
int kase,t;
int main(){
	cin>>t;
	kase=1;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<n+1;i++){
			cin>>a[i];
		}
		for(int i=1;i<n+1;i++){
			cin>>b[i];
		}
		int up=b[n];
		int down=a[n];
		for(int i=n-1;i>0;i--){
			
			up+=a[i]*down;
			down*=b[i];
			swap(up,down);
			
		}
	
	
		int holder=gcd(up,down);
		up/=holder;
		down/=holder;
		cout<<"Case #"<<kase++<<": "<<up<<" "<<down<<"\n";
	}
	return 0;
}
}
