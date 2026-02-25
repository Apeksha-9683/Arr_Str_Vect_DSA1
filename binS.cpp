#include<iostream>
using namespace std;

int bins(int *arr,int n,int key){
    int start=0,end=n-1, i;
    int mid=(start+end)/2;
    if(arr[i]==key){
        cout<<"Key found at "<< i << "index"<<endl;
        
    }

    else if(arr[i]<key){
        start=mid + 1;
    }
    else if (arr[i]>key)
    {
        end=mid-1;
    }
    return -1;
}

int main(){
    int arr[]={1,2,4,5,78,92,99};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<bins(arr,n,key)<<endl;
    return 0;

}