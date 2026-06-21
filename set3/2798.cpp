#include <iostream>
using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for (int i=0;i<hours.size();i++){
            if (hours[i]>=target){
                count=count+1;
            }
        }
        return count;
    }
};
int main(){
    int n;
    cin>>n;
    vector <int> hours(n);
    int target;
    cin>>target;
    Solution sup;
    cout<<sup.numberOfEmployeesWhoMetTarget(hours,target);
}