/* Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer. */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pow(int,int);
int main(){
    int x,n;
    cin>>x>>n;
    int p = pow(x,n);
    cout<<p<<endl;
}
int pow(int x,int n){
    if(n==0){
        return 1;
    }
    int num = pow(x,n/2);
    if(n%2==0){
        return num*num;
    }
    else{
        return num*num*x;
    }
}
