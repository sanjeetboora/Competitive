/* Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order). */
#include <bits/stdc++.h>
using namespace std;
vector<int> allIndices(vector<int>arr,vector<int>result,int num,int n){
    if(n==arr.size()){
        if(result.empty()){
            result.push_back(-1);
        }
        return result;
    }

    if(arr[n]==num){
        result.push_back(n);
    }
    return allIndices(arr,result,num,n+1);
}
int main(){
    vector<int> arr = {9, 8, 10, 8, 8};
    vector<int> result={};
    vector<int> res=allIndices(arr,result,8,0);
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }
}

