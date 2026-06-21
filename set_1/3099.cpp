#include <iostream>
using namespace std;
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int y=x;
        int sum=0;
        int m=0;
        while(x>0){
            m=x%10;
            sum=sum+m;
            x=x/10;
        }
        if (y%sum==0){
            return sum;
        }
        else{
            return -1;
        }
    }
};
int main(){
    int x;
    cin>>x;
    Solution a;
    cout<<a.sumOfTheDigitsOfHarshadNumber(x);
}