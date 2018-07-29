/* Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1. */
#include<bits/stdc++.h>
using namespace std;
vector<string> keycodeSubsequence(int,vector<string>);
string keycode(int);
int main(){
    int num = 0;
    cin >> num;
    vector<string> codes = {};
    vector<string> result = keycodeSubsequence(num,codes);
    for(int i=0;i<result.size();i++){
        cout << result[i]<< endl;
    }
}
string keycode(int num){
    string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return arr[num];
}
vector<string> keycodeSubsequence(int num,vector<string>result){
    if(num==0){
        result.push_back("");
        return result;
    }
    int n = num%10;
    string code = keycode(n);
    vector<string> res = keycodeSubsequence(num/10,result);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<code.length();j++){
            string str = res[i]+code[j];
            result.push_back(str);
        }
    }
    return result;
}
