//
//  main.cpp
//  Day11-2DArrays
//
//  Created by Larry Lai on 14/12/17.
//  Copyright © 2017 Super Fun. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }
    
    int maxSum = 0;
    
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                                + arr[i+1][j+1]
                     + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            if(0 == i && 0 == j) {
                maxSum = sum; // in case negetive sum
            } else {
                maxSum = max(maxSum, sum);
            }
        }
    }
    
    cout << maxSum << endl;
    
    return 0;
}
