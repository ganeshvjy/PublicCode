////////////////////////////////////////////
// Program Name: Utopian Tree             //
// Author      : Ganesh Thiagarajan       //
////////////////////////////////////////////

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