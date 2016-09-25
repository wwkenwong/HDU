#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <math.h>
bool iseven(int n){
    if(n%2==0) return 1;
    else{
        return 0;
    }
}
using namespace std;

int main(){
    int kase;
    cin>>kase;
    int kasecounter=1;
    while(kase--){
        cout<<"Case #"<<kasecounter++<<": ";
        int l,r;
        cin>>l>>r;
        int ans=0;
        
        for(int i=l;i<=r;i++){
            int holdi=i;
            
            int oddcounter=0;
            int evencounter=0;
            
            bool oddflag=0;
            bool evenflag=0;
            bool oddend=0;
            bool evenend=0;
            
            int putin=holdi%10;
            holdi/=10;
            
            if(iseven(putin)){
                evenflag=1;
                evencounter++;
            }else{
                oddflag=1;
                oddcounter++;
            }
            bool endgame=0;
            while(holdi!=0){
                putin=holdi%10;
                holdi/=10;
                if(iseven(putin)&&evenflag&&!oddflag&&oddcounter==0){
                    evencounter++;
                }else if(!iseven(putin)&&!evenflag&&oddflag&&evencounter==0){
                    oddcounter++;
                }else if(iseven(putin)&&oddflag&&!evenflag&&!oddend&&!evenend){
                    oddend=1;
                    evencounter++;
                }else if(!iseven(putin)&&!oddflag&&evenflag&&!oddend&&!evenend){
                    evenend=1;
                    oddcounter++;
                }else if(!iseven(putin)&&evenend&&!oddend){
                    oddcounter++;
                }else if(iseven(putin)&&oddend&&!evenend){
                    evencounter++;
                }else{
                    endgame=1;
                    holdi=0;
                }
            }
            if(!endgame){
                //cout<<evencounter<<" "<<oddcounter<<" "<<i<<"\n";
                if(evencounter==0){
                    if(iseven(oddcounter)){ans++;}
                }
                else if(!iseven(evencounter)){
                    if(iseven(oddcounter)){ans++;}
                }
               
                
            }
            
        }
        cout<<ans<<"\n";
    }
}
