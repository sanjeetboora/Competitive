/* Given an integer sorted array (sorted in increasing order) and an element x,
find the x in given array using binary search. Return the index of x. */
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int,int ,int);
int main(){
    int num,x;
    cin >> num;
    int arr[num] = {0};
    for(int i=0;i<num;i++){
        cin >>arr[i];
    }
    cin >> x;
    int srchidx = binarySearch(arr,x,0,num);
    cout << srchidx << endl;
}
int binarySearch(int arr[],int x,int sidx, int eidx){
    if(sidx>eidx){
        return -1;
    }
    int mid = (sidx+eidx)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return binarySearch(arr,x,0,mid-1);
    }
    else{
        return binarySearch(arr,x,mid+1,eidx);
    }

}
