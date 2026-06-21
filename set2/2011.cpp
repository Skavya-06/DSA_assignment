#include <iostream>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int p = 0;

        for(int i = 0; i < operations.size(); i++) {
            if(operations[i][1] == '+')
                p++;
            else
                p--;
        }

        return p;
    }
};
int main(){
    int n;
    cin>>n;
    vector <string> operations;
    for(int i=0;i<n;i++){
        cin>>operations[i];
    }
    Solution sup;
    cout<<sup.finalValueAfterOperations(operations);

}