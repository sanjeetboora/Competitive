/* Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions
x1,...,xN (0 <= xi <= 1,000,000,000). His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other
once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that
the minimum distance between any two of them is as large as possible. What is the largest minimum distance? */
#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int c,int n,int distance){
    int co =1;
    int last_pos = arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-last_pos)>=distance){
            last_pos=arr[i];
            co++;
        }
        if(co==c){
            return true;
        }
    }
    return false;
}
int main(){
    int n = 5;
    int c = 3;
    int arr[5] = {1,2,8,4,9};
    sort(arr,arr+n);
    int start = arr[0],last = arr[n-1]-arr[0];

    int result = 0 ;
    while(start<=last){
        int mid = (start+last)/2;
        if(check(arr,c,n,mid)){
            result=mid;
            start=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    cout << result;
}
