#include <iostream>
#include <algorithm>
using namespace std;

int getpivot(int arr[],int size){
    int s=0;
    int e=size;
    int mid =s+((e-s)/2);
    while(s<e){
        if (arr[mid]>=arr[s]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int main(){
    return 0;
}