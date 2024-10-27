
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how many row do you want to input :-";
    cin>>n;
    for (int i=1;i<=n;i++){   // number of row
        for (int j=1;j<=n;j++){   // number of col
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}