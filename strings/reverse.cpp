#include<iostream>
using namespace std;

void reverse(char word[], int n){
    int st=0, end= n-1;
    while(st<end){
        swap(word[st], word[end]);
        st++;
        end--;
    }
}