/* Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1. */
#include<bits/stdc++.h>
using namespace std;
void keycodeSubsequence(int,string);
string keycode(int);
int main(){
    int num = 0;
    cin >> num;
    keycodeSubsequence(num,"");
    return 0;
}
string keycode(int num){
    string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return arr[num];
}
void keycodeSubsequence(int num,string result){
    if(num==0){
        cout << result << endl;
        return ;
    }
    int n = num%10;
    string code = keycode(n);
        for(int j=0;j<code.length();j++){
            keycodeSubsequence(num/10,result+code[j]);
        }

}

