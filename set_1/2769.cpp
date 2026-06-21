#include <iostream>
using namespace std;
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num+ (2*t);

    }
};

int main(){
    int num,t;
    cin>>num>>t;
    Solution hello;
    cout<<hello.theMaximumAchievableX(num,t);
}