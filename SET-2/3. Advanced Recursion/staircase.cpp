/* A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time.
Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W. */
#include<bits/stdc++.h>
using namespace std;
int countways(int,int);
int main(){
    int num;
    cin >> num;
    int ways = countways(0,num);
    cout << ways << endl;
}
int countways(int curr, int eos ){
    if(curr>eos){
        return 0;
    }
    if(curr==eos){
        return 1;
    }
    int nofWays = countways(curr+1,eos)+countways(curr+2,eos)+countways(curr+3,eos);
    return nofWays;
}
