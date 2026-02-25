#include<iostream>
#include<cstring>
using namespace std;

void tolower(char word[], int n){
    for(int i=0;i<n; i++){
        char ch=word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }else{
            word[i]=ch-'A'+'a';

        }
        
    }
}

void reverse(char sent[], int m){
    int start=0; int end=m-1; int temp;
    while(start<end){
        char temp=sent[start];
        sent[start]=sent[end];
        sent[end]=temp;
    start++;end--;}
}

int main(){
    char word[30];
    //cin>>word; dnt use this line and down line at the same time or else u have to use cin.ignore() before getline
     cin.getline(word, 30);
    int n=strlen(word);
    tolower(word,n);
    cout<<"The word in lowercase is: "<<word<<endl;


    char sent[30];
     //cin>>sent; 
     cin.getline(sent,30);
    int m=strlen(sent);
    reverse(sent,m);
    cout<<"The word in reverse is: "<<sent<<endl;
}



