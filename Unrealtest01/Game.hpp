//
//  Game.hpp
//  Unrealtest01
//
//  Created by eldervaz on 5/10/16.
//  Copyright © 2016 eldervaz. All rights reserved.
//


#pragma once
#include <string>
//using namespace std;


class Game{
    
public:
    void Reset();
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGameWon();
    bool CheckGuessValidity(std::string);
    
    
    
private:
    int MyCurrentTry;
    int MyMaxTries = 5;
};