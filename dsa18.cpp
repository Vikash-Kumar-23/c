#include <iostream>
#include <climits>
using namespace std;
void input(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<"enter "<<i+1<<" element :-";
        cin>>arr[i];
    }
}

bool search (int arr[],int size,int key){
    for (int i=0;i<size;i++){
        if (key==arr[i]){
            return true;
        }
    }
    return false;
}

void rev(int arr[],int size){
    int a1=size,b1=0,c1=0;
    for (int i=0;i<size;i++){
        c1=arr[i];
        b1=arr[size-i-1];
        arr[i]=b1;
        arr[size-i-1]=c1;
        a1--;
        if (a1==i){
            break;
        }
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
    int size,q;
    cout<<"enter size of the array :-";
    cin>>size;
    input(n,size);

    /*
    cout<<"enter key you want to search :-";
    cin>>q;
    if (search(n,size,q)){
        cout<<"it is present"<<endl;
    }
    cout<<"not present"<<endl;
    */
    rev(n,size);
    output(n,size);
    //cout<<max(n,size)<<endl;
    //cout<<min(n,size);
    return 0;
}