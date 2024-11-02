#include <iostream>
using namespace std;
void input(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter "<<i+1<<" element :-";
        cin>>arr[i];
    }
}

int output(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"arry :-"<<arr[i];
    }
}

int main(){
    int n[100];
    int size;
    cout<<"enter size of the array :-";
    cin>>size;
    input(n,size);
    output(n,size);
    return 0;
}