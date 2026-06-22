#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index;

        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words[i].length(); j++) {
                if(words[i][j] == x) {
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
    }
};
int main(){
    int n;
    cin>>n;
    char x;
    cin>>x;
    vector <string> words(n);
    for (int i=0;i<n;i++){
        cin>>words[i];
    }
    Solution sup;
    vector<int> result = sup.findWordsContaining(words,x);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    

}
