#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
// 1 2 3 4 
// 1 2 3
// 1 2
// 1