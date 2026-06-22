#include <iostream>
using namespace std;
class Solution {
    public:
        int countPrefixes(vector<string>& words, string s) {
            int count = 0;
            
            for (const string& word : words) {
                if (s.length() >= word.length() && s.compare(0, word.length(), word) == 0) {
                    count++;
                }
            }
            return count;
    }
}; 
int main(){
    int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    string s;
    cin>>s;
    Solution sup;
    cout<<sup.countPrefixes(words,s);
}