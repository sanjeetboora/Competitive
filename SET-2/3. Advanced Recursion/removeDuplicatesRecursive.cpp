/* Given a string S, remove consecutive duplicates from it recursively. */
#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str,int num,string result){
    if(num==str.length()){
        return result;
    }
    if(str[num]==str[num-1]){
        result = removeDuplicates(str,num+1,result);
    }
    else{
        result = removeDuplicates(str,num+1,result+str[num]);
    }
    return result;

}
int main(){
    string str = "aabbbccabfffgggghh";
    string res = removeDuplicates(str,0,"");
    cout << res << endl;
}
