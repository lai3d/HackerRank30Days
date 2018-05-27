//
//  main.cpp
//  Day14-Scope
//
//  Created by Larry Lai on 14/12/17.
//  Copyright © 2017 Super Fun. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
    
    public:
    int maximumDifference;
    
    Difference(const vector<int>& other)
    : elements(other){
        
    }
    
    void computeDifference() {
        maximumDifference = 0;
        
        if(elements.size() <= 1)
            return;
        
        for (vector<int>::iterator it = elements.begin(); it != elements.end(); ++it) {
            int currentElement = *it;
            
            for (vector<int>::iterator it = elements.begin() + 1; it != elements.end(); ++it) {
                int absDiff = abs(*it - currentElement);
                if(absDiff > maximumDifference)
                    maximumDifference = absDiff;
            }
        }
    }
    
}; // End of Difference class

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
