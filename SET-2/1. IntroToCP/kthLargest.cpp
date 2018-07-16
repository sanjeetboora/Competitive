#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {2, 12, 9, 16, 10, 5, 3, 20, 25, 11, 1, 8, 6};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<< k <<"th largest element is " << arr[n-k-1];
     cout<< k <<"th smallest element is " << arr[k-1];
}
