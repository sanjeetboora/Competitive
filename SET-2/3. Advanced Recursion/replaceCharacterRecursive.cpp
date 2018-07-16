/* Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string. */
#include <bits/stdc++.h>
using namespace std;
string replacechar(string& str,char ne,char replaced,int num){
    if(num==str.length()){
        return str;
    }
    if(str[num]==replaced){
        str[num]=ne;
    }
    return replacechar(str,ne,replaced,num+1);
}
int main(){
    string str = "abcycvbyhjkyvbxy";
    char ne='x';
    char replaced='y';
    replacechar(str,ne,replaced,0);
    cout << str << endl;
}

