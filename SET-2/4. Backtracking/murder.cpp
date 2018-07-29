/* Once detective Saikat was solving a murder case. While going to the crime scene he took the stairs and saw that a number is written on every stair. He found it suspicious and decides to remember all the numbers that he has seen till now. While remembering the numbers he found that he can find some pattern in those numbers. So he decides that for each number on the stairs he will note down the sum of all the numbers previously seen on the stairs which are smaller than the present number. Calculate the sum of all the numbers written on his notes diary.*/
#include<bits/stdc++.h>
using namespace std;
int merges(int arr[],int si,int mid,int ei){
    int temp[ei-si+1]={0};
    int left = si,right=mid+1,k=0,sum=0;
    while(left<=mid && right<ei){
        if(arr[left]<arr[right]){
            sum+=arr[left]*(ei-right);
            temp[k++]=arr[left++];
        }
        else{
            temp[k++]=arr[right++];
        }
    }
    while(left<=mid){
        temp[k++]=arr[left++];
    }
    while(right<ei){
        temp[k++]=arr[right++];
    }
    int i=0;
    for(k=si;k<ei;k++){
        arr[k]=temp[i];
        i++;
    }
    return sum;
}
int mergesort(int arr[],int si,int ei){
    int sum=0;
    if(si<ei){
        int mid=(ei+si)/2;
        int fhalf = mergesort(arr,si,mid);
        int shalf = mergesort(arr,mid+1,ei);
        int result = merges(arr,si,mid,ei);
        return result;
    }
    return sum;
}
int main(){
    int n=5;
    int arr[5]={1,5,3,6,4};
    int sum = mergesort(arr,0,5);
    cout << sum<<endl;
}
