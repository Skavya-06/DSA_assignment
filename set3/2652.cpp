#include <iostream>
using namespace std;
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i% 3==0 or i%5==0 or i%7==0){
                sum+=i;
            }
        }
        return sum;
    }
};
int main(){
    int n;
    cin>>n;
    Solution sup;
    cout<<sup.sumOfMultiples(n);
}