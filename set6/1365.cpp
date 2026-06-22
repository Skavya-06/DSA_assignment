#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>copy=nums;
        sort(copy.begin(),copy.end());
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            int count=0;
            while(copy[count]!=nums[i]){
                count++;
                    
            }
            result.push_back(count);
        }
        return result;
    }
};
int main(){
    int n;
    cin>>n;
   vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sup;
    vector<int> result = sup.smallerNumbersThanCurrent(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}