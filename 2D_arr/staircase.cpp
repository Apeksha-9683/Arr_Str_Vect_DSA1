/*For staircase method there are two methods one is using (0,3) and (3,0)*/


#include<iostream>
using namespace std;


//(0,3)
bool search(int mat[][4], int n,int m, int key){
    int i=0,j=m-1;
    for(;i<n && j>=0;){
        if(mat[i][j]==key)   {cout<<"Key found at ("<<i<<","<<j<<")"; return true;}
        else if(mat[i][j]>key) {j--;}
        else if(mat[i][j]<key){i++;}
    
}
cout<<"key not found"<<endl;
return false;
}

//searcing thro (3,0)
bool search2(int mat[][4], int n, int m, int key){
    int i=n-1,j=0;
    for(;j<m && i>=0;){
        if(mat[i][j]==key){cout<<"Key is found at ("<<i<<","<<j<<")";return true;}
        else if(mat[i][j]>key){i--;}
        else if(mat[i][j]<key){j++;}}
cout<<"key not found"<<endl;return false;    }
   

int main(){
    int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};



    
    search(mat,4,4,11);
    cout<<endl;
    search2(mat,4,4,11);
    return 0;
}