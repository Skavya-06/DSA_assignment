#include <iostream>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};
int main(){
    int a, b;
    cin >> a >> b;

    Solution SUM;
    cout << SUM.sum(a, b);

    return 0;
}