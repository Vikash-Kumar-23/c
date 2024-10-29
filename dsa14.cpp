#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,i=0,ans=0;
    cout<<"Enter a binary number :-";
    cin>>n;
    while (n>0)
    {
        if ((n & 1) ==1)
        {
            ans=(ans+(pow(2,i)));
        }
        n=int(n/10);
        i=i+1;
        
    }
    cout<<"ans :-"<<ans;
    
    return 0;
}