#include<iostream>
using namespace std;

int maxsubarray(int *arr, int n){
    int maxsum=INT_MIN;
    
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=0;end<n;end++){//doubt whether start from start
            currsum+=arr[end];
            maxsum=max(maxsum,currsum);

        }
        cout<<endl;
    } return maxsum;
}

int main(){
    int arr[6]={2,3,4,56,72,34};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Maximum subarray sum: "<<maxsubarray(arr,n);
    return 0;
}
