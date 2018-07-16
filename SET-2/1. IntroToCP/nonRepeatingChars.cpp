/*In a given string, find the first non-repeating character .You are given a string, that can contain repeating characters. Your task is to return the first character in this string that does not repeat. i.e., occurs exactly once. T
he string will contain characters only from English alphabet set, i.e., ('A' - 'Z') and ('a' - 'z'). If there is no non-repeating character print the first character of string. */
#include<iostream>
#include<cstring>
#include<map>
using namespace std;
char nonRepeatingChar(string str);
int main(){
    string str = "abnnskklsacd";
    char result = nonRepeatingChar(str);
    cout << result << endl;
}
char nonRepeatingChar(string str){
    map<char,int> freqMap;
    for(int i=0;i < str.length();i++){
        char curr = str[i];
        freqMap[curr]++;
    }
     for(int j=0;j < str.length();j++){
        if(freqMap[str[j]]==1){
          return str[j];
        }
    }
    return str[0];
}
