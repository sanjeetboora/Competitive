/* Given an array A of size n and an integer K, print all subsets of A which sum to K. */
#include<bits/stdc++.h>
using namespace std;
void printSubsetSumK(vector<int>,vector<int>,int,int);
int main(){
    vector<int>arr = {5, 12, 3, 17, 1, 18, 15, 3, 17};
    vector<int>output={};
    int sum = 6;
     printSubsetSumK(arr,output,0,6);
}
void printSubsetSumK(vector<int>arr,vector<int>output,int idx,int sum){
    if(idx==arr.size()){
            int s = 0;
        for(int i=0;i<output.size();i++){
            s+=output[i];
        }
        if(s==sum){
          for(int i=0;i<output.size();i++){
            cout << output[i] << ", ";
          }
          cout<<endl;
        }
        return;
    }
    printSubsetSumK(arr,output,idx+1,sum);
    output.push_back(arr[idx]);
    printSubsetSumK(arr,output,idx+1,sum);
}
