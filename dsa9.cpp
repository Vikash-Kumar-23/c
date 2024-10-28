#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;

    cout<<(a&b)<<endl;  //and
    cout<<(a|b)<<endl;  //or
    cout<<(a^b)<<endl;  //ex-or
    cout<<(~a)<<endl;   //not

    //left-shift --> multi by 2 in most of the case
    //right-shift --> devid by 2 in most of the case
    //left and right both for positive number
    //second bit one ha to error

    cout<<(17>>1)<<endl;  //right shift
    cout<<(21<<1)<<endl;

    //post-inc
    //i++ --> post inc 
    //i ki value used kar na ka badh incr kar do
    //ex:-
    int x=5;
    int i=2;
    x=x+(i++);
    cout<<x<<" "<<i<<endl;
    x=x+(i);
    cout<<x<<" "<<i;
    return 0;
}