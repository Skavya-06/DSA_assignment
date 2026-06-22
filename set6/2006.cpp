#include <iostream>
using namespace std;
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){     
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                    count++;
                }
            }
        }
        return count;
    }
};
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums;
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sup;
    cout<<sup.countKDifference(nums,k);
}