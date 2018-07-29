/* Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S.
Write a program to print the list of all possible codes that can be generated from the given string. */
#include<bits/stdc++.h>
using namespace std;
void allPossibleCodes(string,string);
int main(){
    string num = "1123";
    allPossibleCodes(num,"");
}
void allPossibleCodes(string num,string result){
    if(num.length()==0){
        cout << result<<endl;
        return;
    }
    int first = num[0]-'0';
    int second = 0;
    if(num.length()>=2){
        second = stoi(num.substr(0,2));
    }
    if(second < 27 && num.length() >=2 ){
        char ch1 = first + 'a' - 1;
        char ch2 = second + 'a' - 1;
        allPossibleCodes(num.substr(1),result+ch1);
        allPossibleCodes(num.substr(2),result+ch2);
    }
    else{
        char ch1 = first + 'a'-1;
        allPossibleCodes(num.substr(1),result+ch1);
    }
}
