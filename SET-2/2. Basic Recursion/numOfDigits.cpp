/* code to find out and return the number of digits present in a number recursively */
#include<bits/stdc++.h>
using namespace std;
int numDigits(int);
int main(){
    int x;
    cin>>x;
    int num = numDigits(x);
    cout<<"no. of digits " << num <<endl;
}
int numDigits(int num){
    if(num==0){
        return num;
    }
    int res = numDigits(num/10);
    return res+1;
}
