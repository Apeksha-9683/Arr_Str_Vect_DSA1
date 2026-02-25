#include<iostream>
using namespace std;

int linsear(int *arr, int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Key found at index "<<i<<endl;return i;
        }
    }return -1;
}

int main(){
    int arr[]={3,2,4,5,62,3};
    int key;
    int n=sizeof(arr)/sizeof(int);
    cout<<"enter a key value: "<<endl; cin>>key;
    cout<<linsear(arr,n,key)<<endl;
    return 0;
}