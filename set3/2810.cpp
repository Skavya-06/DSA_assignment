#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    string finalString(string s) {
        string result = "";
        
        for (char c : s) {
            if (c == 'i') {
                reverse(result.begin(), result.end());
            } else {
                result.push_back(c);
            }
        }
        return result;
    }
};
int main(){
    string s;
    cin>>s;
    Solution sup;
    cout<<sup.finalString(s);
}