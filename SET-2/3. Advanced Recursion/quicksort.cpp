/* Sort an array A using Quick Sort. Change in the input array itself */
#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quicksort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int p = partition(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);
}
int main(){
    int arr[]={2, 6, 8, 5, 4, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
