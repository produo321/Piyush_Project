#include<iostream>
using namespace std;
int main(){                  
    int n=9;                 
    for(int i=1;i<=n;i++){   
        for(int j=1;j<=n;j++){
           if((j)%2==0){
            cout<<" 1";
           }
           else{
            cout<<" 0";
           }
        }
            cout<<endl;
    }
}
// 0 1 0 1 0
// 0 1 0 1 0
// 0 1 0 1 0
// 0 1 0 1 0