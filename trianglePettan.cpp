#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n+1-i;j++){
        cout<<" ";//first Triangle add 
        // cout<<" "// second Tringle
        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
            cout<<endl;
    }
}
//           * 
//         * *
//       * * *
//     * * * *
//   * * * * *
// * * * * * *


//triangle
//        * 
//       * *
//      * * *
//     * * * *
//    * * * * *
//   * * * * * *