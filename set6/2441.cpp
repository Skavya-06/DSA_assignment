#include <iostream>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((nums[i]+nums[j])==0){
                    result.push_back(abs(nums[i]));
                }
            }
        }
        if(result.size() == 0){
             return -1;
        }
        sort(result.begin(),result.end());
        return result[result.size()-1];
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    Solution sup;
    cout<<sup.findMaxK(nums);
}