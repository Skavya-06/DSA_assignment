#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        for(int i = 0;i<n ;i++)ans[i]=nums[i],ans[n+i] = nums[i];   
        return ans ;
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
    vector<int> result = sup.getConcatenation(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}