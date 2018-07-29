/* Given a string, find and print all the possible permutations of the input string. */
#include<bits/stdc++.h>
using namespace std;
void printPermutations(string,string);
int main(){
    string str = "abc";
    printPermutations(str,"");
    return 0;
}
void printPermutations(string str,string result){
    if(str.length()==0){
        cout << result << endl;
        return;
    }
    for(int i=0; i < str.length(); i++){
        char ch = str[i];
        string rest = str.substr(0,i)+str.substr(i+1);
        printPermutations(rest,result+ch);
    }
}
