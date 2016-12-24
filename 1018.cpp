#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main() {
	
	int n;
	cin>>n;
	while(n--){
		int t;
		int ans;
		cin>>t;
		
		ans=(t*log(t)-t+0.5*log(2*t*PI))/log(10);
		cout<<ans+1<<"\n";
	}
	
	return 0;
}
