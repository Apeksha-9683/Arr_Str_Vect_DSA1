#include<iostream>
using namespace std;

void uppercase(char word[], int n){
        for(int i=0;i<n;i++){
            char ch = word[i];
            if(ch>='a' && ch<='z'){
                word[i]=ch-'a'+'A';

            }
        }
}

int main(){
    char word[]= "abCFdef";
    uppercase(word, 7);
    cout<<word<<endl;
    return 0;
}