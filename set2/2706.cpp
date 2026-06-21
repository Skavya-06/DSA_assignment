#include <iostream>
using namespace std;
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        if(prices[0]+prices[1]<=money){
            return money-(prices[0]+prices[1]);
        }
        else{
            return money;
        }
    }
};
int main(){
    int n;
    cin>>n;
    vector <int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int money;
    cin>>money;
    Solution sup;
    cout<<sup.buyChoco(prices,money);

}