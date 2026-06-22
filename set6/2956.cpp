#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2){
        int answer1=0;
        int answer2=0;
        vector <int> answer(2);
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if( nums1[i]==nums2[j] ){
                    answer1++;  
                    break;  
                }
            }
        }
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(nums2[i]==nums1[j]){
                    answer2++;  
                    break;  
                }
            }
        }         
        answer[0]=answer1;
        answer[1]=(answer2);

        return answer;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
   vector<int>nums1(n);
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    vector<int>nums2(m);
    for(int i=0;i<m;i++){
        cin>>nums2[i];
    }
    Solution sup;
    vector<int> result = sup.findIntersectionValues(nums1,nums2);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}