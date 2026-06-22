#include <iostream>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        
        // Count all elements that are strictly less than k
        for (int num : nums) {
            if (num < k) {
                count++;
            }
        }
        
        return count;
    }
};
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sup;
    cout<<sup.minOperations(nums,k);

}