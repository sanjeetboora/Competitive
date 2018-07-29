/* Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer. */
#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    if(n==0){
        return 1;
    }
    int p = power(x,n/2);
    int xpn=0;
    if(n%2==0){
        xpn = p*p;
    }else{
         xpn = p*p*x;
    }
    return xpn;
}

int main(){
    int x,n;
    x=3,n=4;
    int pw = power(x,n);
    cout << pw << endl;
}
