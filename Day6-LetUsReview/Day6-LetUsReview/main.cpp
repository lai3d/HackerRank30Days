//
//  main.cpp
//  Day6-LetUsReview
//
//  Created by Larry Lai on 13/12/17.
//  Copyright © 2017 Super Fun. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {

    int n = 0;
    cin >> n;
    
    vector<string> strVec;
    strVec.resize(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> strVec[i];
    }
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < strVec[i].length(); ++j) {
            if(j % 2 == 0) {
                cout << strVec[i][j];
            }
        }
        
        cout << ' ';
        
        for(int j = 0; j < strVec[i].length(); ++j) {
            if(j % 2 != 0) {
                cout << strVec[i][j];
            }
        }
        cout << endl;
    }
    
    return 0;
}
