//
//  main.cpp
//  Day8-DictionariesAndMaps
//
//  Created by Larry Lai on 13/12/17.
//  Copyright © 2017 Super Fun. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
//#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    map<string, string> contacts;
    
//    char input[100];
    
    for(int i = 0; i < n; ++i) {
        string name;
        string phoneNumber;
        
        cin >> name;
        cin >> phoneNumber;
        
//        cin.getline(input, sizeof(input));
//
//        string s(input);
//
//        string::size_type pos = s.find('.');
//        if(pos != s.npos) {
//            name = s.substr(0, pos);
//            phoneNumber = s.substr(pos + 1, s.length());
//        }
        
        
        contacts[name] = phoneNumber;
    }
    
    string queryName;
    
    while(cin >> queryName) {
        if(contacts.find(queryName) == contacts.end()) {
            cout << "Not found" << endl;
        } else {
            cout << queryName << "=" << contacts[queryName] << endl;
        }
    }
    
    return 0;
}
