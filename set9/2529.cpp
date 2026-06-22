#include <iostream>
using namespace std;
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positiveCount = 0;
        int negativeCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num > 0) {
                positiveCount++;
            } else if (num < 0) {
                negativeCount++;
            }
        }
        return max(positiveCount, negativeCount);
    }
};
int main(){
    int n;
    cin>>n;
    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sup;
    cout<<sup.maximumCount(nums);
}