//
//  main.cpp
//  Day9-Recursion
//
//  Created by Larry Lai on 14/12/17.
//  Copyright © 2017 Super Fun. All rights reserved.
//

#include <iostream>

using namespace std;

int factorial(int n) {
    // Complete this function
    if(1 == n)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}
