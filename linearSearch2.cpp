#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,7,4,34,235,9,16};
    int n= sizeof(arr)/sizeof(int);
    int start=0;
    int end = n-1;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
        }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";}
    return 0;
    
}