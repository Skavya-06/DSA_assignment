#include <iostream>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){      
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sup;
    cout<<sup.numIdenticalPairs(nums);
}