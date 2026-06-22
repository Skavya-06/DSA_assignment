#include <iostream>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<stones.length();i++){
            for(int j=0;j<jewels.length();j++){
                if(stones[i]==jewels[j]){
                    count++;
                    break;
                }
                
            }
        
        }
        return count;
    }
};
int main(){
    string jewels;
    cin>>jewels;
    string stones;
    cin>>stones;
    Solution sup;
    cout<<sup.numJewelsInStones(jewels,stones);
}