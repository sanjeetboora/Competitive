/* Shaky has N (1<=N<=50000) candy boxes each of them contains a non-zero number of candies (between 1 and 1000000000). Shakey want to distibute these candies among his K (1<=K<=1000000000) IIIT-Delhi students. He want to distibute them in a way such that:
1. All students get equal number of candies.
2. All the candies which a student get must be from a single box only.
As he want to make all of them happy so he want to give as many candies as possible. Help Shaky in finding out what is the maximum number of candies which a student can get. */

#include<bits/stdc++.h>
using namespace std;
bool valid(int arr[],int mid,int k,int n){
    for(int j=0;j<n;j++){
        int student = arr[j]/mid;
        k-=student;
    }
    if(k<=0){
        return true;
    }
    return false;
}
int distributedchocos(int arr[],int n,int k){
    sort(arr,arr+n);
    int min =1,chocos=0,max=arr[n-1];
    while(max>=min){
        int mid=(min+max)/2;
        if(valid(arr,mid,k,n)){
            min=mid+1;
            chocos = mid;
        }
        else{
            max=mid-1;
        }
    }
    return chocos;

}
int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
            int n,k;
        cin >> n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
       cout<< distributedchocos(arr,n,k)<<endl;;
    }
}
