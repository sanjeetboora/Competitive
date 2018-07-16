/* print number from 1 to n in increasing order recursively */
#include<bits/stdc++.h>
using namespace std;
void incOrder(int);
int main(){
    int x;
    cin>>x;
     incOrder(x);

}
void incOrder(int n){
    if(n==0){
        cout<<n<<" ";
        return;
    }
    incOrder(n-1);
    cout<<n<<" ";
}
