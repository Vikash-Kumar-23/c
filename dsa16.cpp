#include <iostream>
using namespace std;
int main(){
    int n,a=0;
    string q;
    cout<<"enter a binary number :-";
    cin>>n;
    
    while (n>0){
        a=n%10;
        if (a==0){
            q='1'+q;
        }
        else{
            q='0'+q;
        }
        n=int(n/10);
    }
    if (n==0){
        q='1'+q;
    }
    cout<<q;
    return 0;
}