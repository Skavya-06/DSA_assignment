#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        for(int i = 0; i < n; i++){
            ans.push_back(nums[i]);     
            ans.push_back(nums[i + n]);  
        }

        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector <int> nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sup;
    vector<int> result = sup.shuffle(nums,x);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}