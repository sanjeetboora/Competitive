/* Suppose you have a string made up of only 'a' and 'b'. Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false. */
#include<bits/stdc++.h>
using namespace std;
bool check(string,string);
int main(){
    string str;
    cin >> str;
    if(check(str,"")){
        cout << "true" << endl;}
    else{
         cout << "false" << endl;
    }
}
bool check(string str,string previous){
        if(!previous.compare("")){
            return str.length()==0 || (str[0]=='a' && check(str.substr(1),"a"));
        }
        else if(!previous.compare("a")){
            return str.length()==0 || (str.length()>=2 && !((str.substr(0,2)).compare("bb"))&& check(str.substr(2),"bb")) || (str[0]=='a' && check(str.substr(1),"a"));
        }
        else if(!previous.compare("bb")){
            return str.length()==0 || (str[0]=='a' && check(str.substr(1),"a"));
        }
        else{
            return false;
        }
    }


