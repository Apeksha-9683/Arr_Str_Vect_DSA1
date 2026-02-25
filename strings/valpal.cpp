//VALID PALLINDROME PROBLEM

//learnings fron this code;
// for true or false in the function USE bool i.e., bool pallinNum()
// in this loop previously i did a mistake if conditions should be outside the loop 
#include <iostream>
#include<cstring>
using namespace std;

bool pallinNum(int num){
    int temp=num;int rev=0;
    while(temp>0){
        int lastdig=temp%10;
        rev=rev*10+lastdig;
        temp=temp/10;}

        if (temp==rev) {
            return true;
            
    }
    

return false;}


// char pallinStr(char word[],int n){

// int st=0; int end=n-1;
// while(st<end){
//     if (word[st]!=word[end]){
//         return false;
//     }
//     st++;end--;
// }

// return true;
// }

int main(){

    //cout<<"enter num: "<<int num<<endl; cin>>num;  wrong way 
    int num;
    cout<<"Enter num"<<endl; cin>>num;
    pallinNum(num);
    if (pallinNum(num)) {
        cout<<"The number is pallindrome"<<endl;

    }
    else{
        cout<<"The number is not a pallindrome"<<endl;
    }
    // char word[30];
    // cout<<"Enter string: "<<endl;
    // cin.getline(word,30);
    // int n=strlen(word);
    // if(!pallinStr(word,n)) cout<<"The string is pallindrome: "<<endl;
    // else cout<<"The pallindrome is not a pallindrome: "<<endl;
    return 0;

}


