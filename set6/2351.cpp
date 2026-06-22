#include <iostream>
using namespace std;
class Solution {
public:
    char repeatedCharacter(string s) {
        int min=s.size();
        char x;
        for (int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    if(j<min){
                        min=j;
                        x=s[i];
                    }
                    break;
                }
            }
        }
        return x;
    }
};
int main(){
    string s;
    cin>>s;
    Solution sup;
    cout<<sup.repeatedCharacter(s);
}