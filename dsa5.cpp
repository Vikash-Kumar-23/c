#include <iostream>
using namespace std;
int main(){
    int n;
    int a;
    cout<<"enter n :-";
    cin>>n;
    for(int i=1;i<=n;i++){
        a=i;
        for(int j=1;j<=i;j++){
            char ch = 'A'+a-1;
            cout<<ch<<" ";
            a=a-1;
        }
        cout<<"\n";
    }
}