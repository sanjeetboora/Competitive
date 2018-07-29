/* Let A[0 ... n-1] be an array of n distinct positive integers. If i < j and A[i] > A[j] then the pair (i, j) is called
 an inversion of A (where i and j are indexes of A). Given an integer array A, your task is to find the number of inversions in A. */
#include<bits/stdc++.h>
using namespace std;
int merges(int arr[],int left,int mid,int right){
    int temp[right-left+1] = {0};
    int count = 0,k=0,l=left,m=mid;
    while(l<mid && m<=right){
        if(arr[l]<=arr[m]){
            temp[k++]=arr[l++];
        }
        else{
            temp[k++]=arr[m++];
            count+=mid-l;
        }
    }
    while(l<mid){
        temp[k++]=arr[l++];
    }
    while(m<=right){
        temp[k++]=arr[m++];
    }
    l=0;
     for(k=left;k<=right;k++){
        arr[k]=temp[l];
        l++;
     }
     return count;
}
int mergesort(int arr[],int left,int right){
    int count =0;
    if(right>left){
        int mid = (left+right)/2;
        int leftcount =  mergesort(arr,left,mid);
        int rightcount = mergesort(arr,mid+1,right);
        int mycount = merges(arr,left,mid+1,right);
        return leftcount + rightcount + mycount;
    }
    return count;
}
int main(){
     int arr[5] = {5,4,2,3,1};
     int invcount = mergesort(arr,0,4);
     cout << invcount << endl;
}

