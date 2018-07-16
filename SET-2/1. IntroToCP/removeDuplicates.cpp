//Given an integer array A which contains duplicates. Remove duplicates from the array and return a new array without any duplicates.
#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> removeDuplicates(vector<int>);
int main(){
    vector<int> arr = {2,3,2,7,3,3,55,57,88,33,45,55};
    vector<int> result = removeDuplicates(arr);
    for(int i=0;i<result.size();i++){
        cout << result[i] << "," ;
    }
}
vector<int> removeDuplicates(vector<int> arr){
    set<int> s;
    vector<int> resultArr;
    for(int i=0;i<arr.size();i++){
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
            resultArr.push_back(arr[i]);
        }
    }
    return resultArr;
}
