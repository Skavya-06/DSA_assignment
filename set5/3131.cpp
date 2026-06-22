#include <iostream>
using namespace std;
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        return nums2[0]-nums1[0];
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> nums1;
    for (int i=0;i<n;i++){
        cin>>nums1[i];
    }
    vector<int> nums2;
    for (int i=0;i<m;i++){
        cin>>nums2[i];
    }
    Solution sup;
    cout<<sup.addedInteger(nums1,nums2);
}