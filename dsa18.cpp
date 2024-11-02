#include <iostream>
#include <climits>
using namespace std;
void input(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter "<<i+1<<" element :-";
        cin>>arr[i];
    }
}

int max(int arr[],int size){
    int a=INT_MIN;
    for (int i=0;i<size;i++){
        if (arr[i]>a){
            a=arr[i];
        }
    }
    return a;
}

int min(int arr[],int size){
    int x=INT_MAX;
    for (int i=0;i<size;i++){
        if (arr[i]<x){
            x=arr[i];
        }
    }
    return x;
}

void output(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n[100];
    int size;
    cout<<"enter size of the array :-";
    cin>>size;
    input(n,size);
    output(n,size);
    cout<<max(n,size)<<endl;
    cout<<min(n,size);
    return 0;
}