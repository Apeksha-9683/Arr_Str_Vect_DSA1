#include<iostream>
using namespace std;

void printSubarrays(int *arr,int n){
    int start=0;int end=n-1;
    for(start=0;start<n;start++){
        for(end=start; end<n;end++){
            if (start!=end)
            cout<<"("<< arr[start]<<","<<arr[end]<<")"<<endl;
        
        else cout<<"("<<arr[start]<<")"<<endl;
    }
    cout<<endl;
    
}
}

void ps2(int *arr,int n){
    int i; int start=arr[i]; int end;
    for( i=0;i<n;i++){
        for(end=start;end<n;end++){
            if (start!=end)
            cout<< start<<arr[end]<<endl;
        
        else cout<<arr[start]<<endl;
        }
        cout<<endl;
    }
}


int main(){
    int arr[]={1,5,3,45,2};
    int n= sizeof(arr)/sizeof(int);
    // printSubarrays(arr,n);
    ps2(arr,n);
    return 0;

}

