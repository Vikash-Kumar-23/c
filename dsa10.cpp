//fibo
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    int s=0,n;
    cout<<"n:-";
    cin>>n;
    for(int i=1;i<=(n-1);i++){
        if (i==1){
            cout<<a<<endl;
            cout<<'1'<<endl;
        }
        else{
            s=a+b;
            a=b;
            b=s;
            cout<<s<<endl;
        }
    }
    return 0;
}