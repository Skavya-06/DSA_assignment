#include <iostream>
using namespace std;
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0;
        int num2=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                num2=num2+i;
            }
            else{
                num1=num1+i;
            }
        }
        return num1-num2;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    Solution nums;
    cout<<nums.differenceOfSums(n,m);
}