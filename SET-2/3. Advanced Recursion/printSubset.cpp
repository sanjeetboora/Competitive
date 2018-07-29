/* Given an integer array (of length n), find and print all the subsets of input array. */
#include<bits/stdc++.h>
using namespace std;
void printsubset(int arr[],int,string);
int main(){
    int num=3;
    int arr[num]={15,20,12};
    printsubset(arr,0,"");
}
void printsubset(int arr[3],int num,string output){
    if (num==3){
        cout << output <<endl;
        return;
    }
    printsubset(arr,num+1,output);
    printsubset(arr,num+1,output+to_string(arr[num])+", ");
}
