#include<iostream>
using namespace std;
int main(){
    int n=9;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
           if((i)%2==0){
            cout<<" 1";
           }else{
            cout<<" 0";
           }
        }
            cout<<endl;
    }
}
//1 1 1 1
//0 0 0 0
//1 1 1 1
//0 0 0 0 
