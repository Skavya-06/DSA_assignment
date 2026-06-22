#include <iostream>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num == 1) {
                currentCount++;
            } else {
                maxCount = max(maxCount, currentCount);
                currentCount = 0;
            }
        }
        return max(maxCount, currentCount);
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
    cout<<sup.findMaxConsecutiveOnes(nums);
}