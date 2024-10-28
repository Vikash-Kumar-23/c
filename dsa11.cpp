#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :-";
    cin>>n;
    if (n<0){
        cout<<"not valied";
    }
    else if (n>0){
        for (int i=2;i<n;i++){
            if(n%i==0){
                cout<<"not a prime number";
                break;
            }
            cout<<"prime number";
        }   
    }
    else{
        cout<<"not a numnber";
    }
    return 0;
}