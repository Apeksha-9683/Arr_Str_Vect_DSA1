#include<iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n , int m){
    int srow=0, ecol=m-1;
    int scol=0, erow=n-1;
    while(srow<=erow && scol<=ecol){
        for(int j=scol; j<=ecol; j++){
            cout<<mat[srow][j]<<" ";
        }
        // for(int j=srow+1; j<=erow; j++){
        //     cout<<mat[j][ecol]<<" ";
        //don't take both same for one take i and for another take j

        
        for(int i=srow+1;i<=erow;i++){
            cout<<mat[i][ecol]<<" ";
        }
        if(srow==erow){break;}
        for(int j=ecol-1;j>=scol;j--){
            cout<<mat[erow][j]<<" ";


            
        }

        if(scol==ecol){break;}
        for(int i=erow-1;i>=srow+1;i--){
            cout<<mat[i][scol]<<" ";
        }
    srow++; ecol--;erow--;scol++;
} 
cout<<endl;}

int main(){
    int matrix[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    spiralMatrix(matrix,3,4);
    return 0;

}


