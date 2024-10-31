#include <iostream>
using namespace std;

int fact(int n){   //pass by value ---> copy of n
    int y=1;
    for (int i=2;i<=n;i++){
        y=y*i;
    }
    return y;
}

int ncr(int n,int r){
    int a=0,b=0,c=0;
    a=fact(n);
    b=fact(r);
    c = fact(n - r);
    return a / (b * c);
}

int main(){
    int num1;
    int num2;
    cout<<"enter num1 :-";
    cin>>num1;
    cout<<"enter num2 :-";
    cin>>num2;
    cout<<fact(num1)<<endl;
    cout<<fact(num2)<<endl;
    cout<<ncr(num1,num2)<<endl;
    return 0;
}