#include <iostream>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0){
                continue;
            }
            else if(nums[i]%3==1){
                nums[i]=nums[i]-1;
                count=count+1;
            }
            else{
                nums[i]=nums[i]+1;
                count=count+1;
            }
        }
        return count;
        
    }
};
int main(){
    int n;
    cin>>n;

    vector <int> nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution v;

    cout<<v.minimumOperations(nums);
}