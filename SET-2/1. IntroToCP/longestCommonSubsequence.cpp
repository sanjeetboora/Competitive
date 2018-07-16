/* You are given with an array of integers that contain numbers in random order. Write a program to find the longest possible sub sequence of consecutive numbers using the numbers from given array.*/
#include<bits/stdc++.h>
using namespace std;
int longestSubsequenceCount(vector<int>);
vector<int> longestSubsequence(vector<int>);
int main(){
    vector<int> arr= {2, 12, 9, 16, 10, 5, 3, 20, 25, 11, 1, 8, 6};
    int lsc = longestSubsequenceCount(arr);
    cout << lsc << endl;
    vector<int> ls = longestSubsequence(arr);
    for(int i=0;i<ls.size();i++){
        cout<<ls[i]<< ", ";
    }
}
int longestSubsequenceCount(vector<int> arr){
    unordered_set<int> st;
    int result=0;
    for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        if(st.find(arr[i]-1) == st.end()){
            int num = arr[i];
            while(st.find(num)!=st.end()){
                num++;
            }
            result=max(result,num-arr[i]);
        }
    }
    return result;
}
vector<int> longestSubsequence(vector<int> arr){
    unordered_set<int> st;
    vector<int>res;
    int result=0,start=0,en=0;
    for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        if(st.find(arr[i]-1) == st.end()){
            int num = arr[i];
            while(st.find(num)!=st.end()){
                num++;
            }
            if((num-arr[i])>result){
                start=arr[i];
                en=num;
            }
            result=max(result,num-arr[i]);
        }
    }
    for(int i=start;i<en;i++){
        res.push_back(i);
    }
    return res;
}
