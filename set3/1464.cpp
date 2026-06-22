#include <iostream>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len=nums.size();
        // for (int i=0;i<len;i++){
        //     nums[i]=nums[i]-1;
        // }
        sort(nums.begin(),nums.end());
        return (nums[len-1]-1)*(nums[len-2]-1);
    }
};
int main(){
    int n;
    cin>>n;
    vector <int> nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sup;
    cout<<sup.maxProduct(nums);
}
