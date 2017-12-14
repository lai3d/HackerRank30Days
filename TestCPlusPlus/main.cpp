//
//  main.cpp
//  TestCPlusPlus
//
//  Created by Larry Yanlin Lai on 23/3/16.
//  Copyright © 2016 Super Fun. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

class Person{
    public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge){
    // Add some more code to run some checks on initialAge
    if(initialAge < 0) {
        age = 0;
        cout << "Age is not valid, setting age to 0." << endl;
    } else {
        age = initialAge;
    }
}

void Person::amIOld(){
    // Do some computations in here and print out the correct statement to the console
    if(age < 13) {
        cout << "You are young." << endl;
    } else if (age >= 13 && age < 18) {
        cout << "You are a teenager." << endl;
    } else {
        cout << "You are old." << endl;
    }
}

void Person::yearPasses(){
    // Increment the age of the person in here
    age += 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    cout << "Hello, World!\n";
//    cout << (10 - 3 > 2 ? 0 : true ? 5 : 3) << endl;
    
    double mealCost = 0.0;
    int tipPercent = 0;
    int taxPercent = 0;
    
//    cout << "Please input mealCost: " << endl;
    cin >> mealCost;
    
//    cout << "Please input tipPercent: " << endl;
    cin >> tipPercent;
    
//    cout << "Please input taxPercent: " << endl;
    cin >> taxPercent;
    
    double totalCost = mealCost + mealCost * (tipPercent + taxPercent) / 100.0;
    
    cout << "The total meal cost is " << round(totalCost) << " dollars.";
    
    return 0;
}
