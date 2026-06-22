#include <iostream>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int n=salary.size();
        sort(salary.begin(), salary.end());
        for(int i=1;i<n-1;i++){
            sum+=salary[i];
        }
        return sum/(n-2);
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> salary;
    for (int i=0;i<n;i++){
        cin>>salary[i];
    }
    Solution sup;
    cout<<sup.average(salary);
}