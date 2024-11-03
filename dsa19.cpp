#include <iostream>
#include <algorithm>
using namespace std;

void input(int n[],int size){
    for(int i=0;i<size;i++){
        cout<<"enter "<<i+1<<" element :-";
        cin>>n[i];
    }
}

void sho_t(int arr[],int n){
    sort(arr, arr + n);
}

int binary_search(int a[],int s,int key){
    int start=0;
    int end=s-1;
    int mid=start+(end-start)/2; // or (start+end)/2 -->INT_MAX or INT_MIN --> me error on using this
    while (start<=end){
        if (a[mid]==key){
            return mid;
        }
        else if (a[mid]<key){
            start=mid+1;
            mid=start+(end-start)/2;
        }
        //(a[mid]>key)
        else{
            end=mid-1;
            mid=start+(end-start)/2;
        }
}
    return -1;
}


int main(){
    //Binary sezarch -->only applyed
    //to monotonic function 
    //either inc or dec function
    //find the mid index of arry 
    //and compare it with key
    //if not equal then 
    //new_mid=(all the element after mid/2)

    //ex:-

    int a[6]={1,2,3,4,5,6};
    cout<<binary_search(a,6,5);
    return 0;
}