/* The span si of a stock’s price on a certain day i is the minimum number of consecutive days (up to the current day)
the price of the stock has been less than its price on that ith day. If for a particular day, if no stock price is greater then
just count the number of days till 0th day including current day.  */
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> stockSpan(vector<int>);
int main(){
    vector<int> stocks = {60, 70, 80, 100, 90, 75, 80, 120};
    vector<int> spans = stockSpan(stocks);
    for(int i=0;i<spans.size();i++){
        cout<< spans[i] << " ," ;
    }
}
vector<int> stockSpan(vector<int> stocks){
    stack<int> stk;
    vector<int> spans;
    stk.push(0);
    spans.push_back(1);
    for(int i=1;i<stocks.size();i++){
        while(!stk.empty() && stocks[stk.top()]<=stocks[i]){
            stk.pop();
        }
        spans.push_back((stk.empty())?(i+1):(i-stk.top()));
        stk.push(i);
    }
    return spans;
}
