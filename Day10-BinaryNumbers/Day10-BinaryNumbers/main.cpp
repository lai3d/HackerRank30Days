//
//  main.cpp
//  Day10-BinaryNumbers
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
#include <unordered_map>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    vector<int> digits;
    
    int remainder;
    int base = 2;
    
    while(n != 0) {
        remainder = n % base;
        n = n / base;
        
        digits.push_back(remainder);
    }
    
    int maxConsecutive = 0;
    int tempConsecutive = 0;
    
    for(vector<int>::iterator it = digits.begin(); it != digits.end(); ++it) {
        if(1 == *it) {
            ++tempConsecutive;
        } else {
            maxConsecutive = max(maxConsecutive, tempConsecutive);
            tempConsecutive = 0;
        }
    }
    maxConsecutive = max(maxConsecutive, tempConsecutive);
    
    cout << maxConsecutive << endl;
    
    return 0;
}
