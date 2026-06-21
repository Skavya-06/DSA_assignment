#include <iostream>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size();

        if (n != s.length()) {
            return false;
        }

        for (int i = 0; i < n; i++) {
            if (words[i][0] != s[i]) {
                return false;
            }
        }

        return true;
    }
};
int main(){
    int n;
    cin>>n;
    vector <string> words;
    for(int i =0;i<n;i++){
        cin>>words[i];
    }
    string s;
    cin>>s;
    Solution sup;
    cout<<sup.isAcronym(words,s);
}