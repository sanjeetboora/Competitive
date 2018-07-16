/* Sort an array A using Merge Sort. Change in the input array itself.  */
#include <bits/stdc++.h>
using namespace std;
void merges(int arr[],int left,int right,int mid){
    int range = right-left, l=left, m=mid+1, idx=0;
    int temparr[range+1];
    while( l<=mid && m<=right ){
        if(arr[l]<=arr[m]){
            temparr[idx]=arr[l];
            l++;
            idx++;
        }
        else{
            temparr[idx]=arr[m];
            m++;
            idx++;
        }
    }
    while(l<=mid){
        temparr[idx]=arr[l];
        idx++;
        l++;
    }
    while(m<=right){
        temparr[idx]=arr[m];
        idx++;
        m++;
    }
    for(int i=0;i<=range;i++){
        arr[left+i]=temparr[i];
    }

}
void mergesort(int arr[],int left,int right){
    if(left>=right){
        return;
    }
    int mid=(left+right)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merges(arr,left,right,mid);
}

int main(){
    int arr[]={2, 6, 8, 5, 4, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
