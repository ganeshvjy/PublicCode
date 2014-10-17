///////////////////////////////////////////////////////////////////
// Program Name: UtopianTree.cpp                                 //
// Language    : standard C++                                    //
// Platform    : Toshiba Satellite Windows 8                     //
// Application : Utopian Tree Generator                          //
// Author      : Ganesh Thiagarajan,                             //
//               ganesh_vjy@yahoo.com                            //
///////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int height(int n) {
    int treeHeight =1;
    int N =1;
    while(N<=n){
        if(N%2==0){
            treeHeight = treeHeight+1;       
        }else{
            treeHeight = (2* treeHeight);            
        }
        N++;
    }
    return treeHeight;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
