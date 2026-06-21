#include <iostream>
using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        for(int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';
            if(i % 2 == 0)
                sum =sum+ digit;
            else
                sum =sum- digit;
        }
        return sum;
    }
};
int main(){
    int n;
    cin>>n;
    Solution sup;
    cout<<sup.alternateDigitSum(n);
}