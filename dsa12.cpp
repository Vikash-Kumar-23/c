#include <iostream>
using namespace std;
int main(){
    int n,m,sum=0,pro=1;
    cout<<"enter a number:-";
    cin>>n;
    //for (int i=0;i<3;i++)
    while (n>0){
        m=n%10;
        n=int(n/10);
        sum=sum+m;
        pro=pro*m;
    }
    cout<<"sum :-"<<sum<<endl;
    cout<<"pro :-"<<pro;
    return 0;
}