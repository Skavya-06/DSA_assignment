#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i += 2) {
            int frequency = nums[i];
            int value = nums[i + 1];

            result.insert(result.end(), frequency, value);
        }
        
        return result;
    }
};
int main(){
    int n;
    cin>>n;
    vector <int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sup;
    vector<int> result = sup.decompressRLElist(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}