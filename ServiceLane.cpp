/////////////////////////////////////////////////
//  Program Name: Service Lane                 //
//  Author Name: Ganesh Thiagarajan            //
/////////////////////////////////////////////////

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int FindPossible(int array[]){
    int i,j;
    cin >> i;
    cin >> j;

    int min =array[i];
    
    for(int x=i+1;x<j+1;x++){
        if(array[x]< min){
            min = array[x];
        }
    }
    
    return min;
}

int main() {
    // Service Lane Problem
    int length;
    cin >> length;
    int Testcase;
    cin >> Testcase;
    
    // Array to store service lane details
    int array[length];
    for(int i=0;i<(sizeof(array) / sizeof(array[0]));i++){
        cin>> array[i];
    }
    
    for(int j=0;j<Testcase;j++){
        cout << FindPossible(array)<<endl;
    }
    return 0;
}
