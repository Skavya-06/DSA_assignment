#include <iostream>
using namespace std;
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
         if((arrivalTime + delayedTime)>=24){
            return arrivalTime +delayedTime -24;
        }
        else{
            return arrivalTime +delayedTime;
        }
    }
};
int main(){
    int arrival,depart;
    cin>>arrival>>depart;
    Solution train;
    cout<<train.findDelayedArrivalTime(arrival,depart);
}