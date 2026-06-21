#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==2){
        cout<<2<<endl;
    }
    if(n%2==0){
        cout<<n<<endl;;
    }else{
        cout<<n*2<<endl;;
    }
    
    return 0;
}