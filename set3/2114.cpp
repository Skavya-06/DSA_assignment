#include <iostream>
using namespace std;
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int answer=0;
        for(int i=0;i<sentences.size();i++){
            int count=1;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' '){
                    count=count+1;
                }
            }
            if(answer<count){
                answer=count;
            }
        }
        return answer;
    }
   
};
int main(){
    int n;
    cin>>n;
    vector <string> sentences(n);
    for(int i=0;i<n;i++){
        cin>>sentences[i];
    }
    Solution sup;
    cout<<sup.mostWordsFound(sentences);
}