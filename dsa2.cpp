#include <iostream>
using namespace std;
int main(){
    int n;
    int a=1;
    cout<<"enter n :-";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a<<" ";
            a=a+1;
        }
        cout<<"\n";
    }
}