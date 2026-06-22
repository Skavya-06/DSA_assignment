#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> startTime(n);
    vector<int> endTime(n);
    for(int i = 0; i < n; i++) {
        cin >> startTime[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> endTime[i];
    }
    int queryTime;
    cin>>queryTime;
    int count=0;
   
    for(int i=0;i<n;i++){
        if(startTime[i] <= queryTime && queryTime <= endTime[i]){
            count++;
        }
    }
    cout<<count; 
    return 0;
}