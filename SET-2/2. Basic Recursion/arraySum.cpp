/* Given an array of length N, you need to find and return the sum of all elements of the array. */
#include<bits/stdc++.h>
using namespace std;
int arrSum(int[],int);
int main(){
    int x[]={9, 8, 9};
    int n=sizeof(x)/sizeof(x[0]);
    int num = arrSum(x,n);
    cout<<"sum of array " << num << endl;
}
int arrSum(int arr[],int n){
    if(n<=0){
        return 0;
    }
    int sum = arrSum(arr,n-1);
    return sum + arr[n-1];
}
