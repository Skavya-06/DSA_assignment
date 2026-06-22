#include <iostream>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(), candies.end());
        vector <bool> answer(candies.size());
        for (int i=0;i<candies.size();i++){
            if ((candies[i]+ extraCandies)>=maxi){
                answer[i]=true;
            }
            
        }
        return answer;
    }
};
int main(){
    int extraCandies;
    cin>>extraCandies;
    int n;
    cin>>n;
    vector <int> candies(n);
     for (int i=0;i<n;i++){
        cin>>candies[i];
    }
    Solution sup;
    vector<bool> result = sup.kidsWithCandies(candies,extraCandies);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}