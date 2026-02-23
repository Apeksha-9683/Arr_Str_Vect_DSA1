#include<iostream>
using namespace std;

void maxSubarraysum1(int *arr, int n)

{int maxsum;
for(int start=0;start<n;start++){
    for(int end =start; end<n;end++){
        int currSum=0;
        for(int i=start;i<=end;i++){
            currSum+=arr[i];


        }
        maxsum=max(maxsum,currSum);

        }
        cout<<endl;

    }
     cout<<"Maximum sub array sum is: "<<maxsum<<endl;}



int main(){
    int arr[]={2,4,2,5,6};
    int n=sizeof(arr)/sizeof(int);
    
}