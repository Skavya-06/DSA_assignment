#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even=0;
        int odd=1;
        while(even<nums.size() && odd<nums.size()){
            if(nums[even]%2==0){
                even+=2;
            }else if (nums[odd]%2!=0){
                odd+=2;
            }else{
                swap(nums[even],nums[odd]);
            }
        }
        return nums;
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
    vector<int> result = sup.sortArrayByParityII(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}