//
//  main.cpp
//  Unrealtest01
//
//  Created by eldervaz on 5/10/16.
//  Copyright © 2016 eldervaz. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    constexpr int WORLD_LENGTH = 5;
    cout << "Using namespace "  << WORLD_LENGTH << " more cool \n";
    cout << endl;
    
    cout << "Enter your guess: ";
    string guess = "";
    cin >> guess;
    cout << "Your guess is " << guess << endl;
    return 0;
}
