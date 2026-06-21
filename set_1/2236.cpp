#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    TreeNode* root = new TreeNode(a);
    root->left = new TreeNode(b);
    root->right = new TreeNode(c);

    if(root->left->val + root->right->val == root->val){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}